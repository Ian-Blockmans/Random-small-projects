/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * scan matrix
 */
#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>
#include "print.h"
#include "debug.h"
#include "util.h"
#include "timer.h"
#include "matrix.h"


#ifndef DEBOUNCE
#   define DEBOUNCE	5
#endif
static bool debouncing = false;
static uint16_t debouncing_time = 0;


/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];

static matrix_row_t read_cols(void);
static void init_cols(void);
static void unselect_rows(void);
static void select_row(uint8_t row);


void matrix_init(void)
{
    // initialize row and col
    unselect_rows();
    init_cols();

    // initialize matrix state: all keys off
    for (uint8_t i=0; i < MATRIX_ROWS; i++) {
        matrix[i] = 0;
        matrix_debouncing[i] = 0;
    }
}

uint8_t matrix_scan(void)
{
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        select_row(i);
        _delay_us(1);  // delay for settling
        matrix_row_t cols = read_cols();
        if (matrix_debouncing[i] != cols) {
            if (debouncing) {
                dprintf("bounce: %d %d@%02X\n", timer_elapsed(debouncing_time), i, matrix_debouncing[i]^cols);
            }
            matrix_debouncing[i] = cols;
            debouncing = true;
            debouncing_time = timer_read();
        }
        unselect_rows();
    }

    if (debouncing && timer_elapsed(debouncing_time) >= DEBOUNCE) {
        for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
            matrix[i] = matrix_debouncing[i];
        }
        debouncing = false;
    }

    return 1;
}

inline
matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}

/* Column pin configuration
 * row: 0   1   2   3   
 * pin: C7  C6  F7  F6
 */
static void  init_cols(void)
{
    // Input with pull-up(DDR:0, PORT:1)
    DDRF  &= ~(1<<7 | 1<<6);
    PORTF |=  (1<<7 | 1<<6);
	DDRC  &= ~(1<<7 | 1<<7);
    PORTC |=  (1<<6 | 1<<6);
}

static matrix_row_t read_cols(void)
{
    return (PINF&(1<<7) ? 0 : (1<<7)) |
           (PINF&(1<<6) ? 0 : (1<<6)) |
           (PINC&(1<<7) ? 0 : (1<<7)) |
           (PINC&(1<<6) ? 0 : (1<<6));
}

/* Row pin configuration
  * col: 0   1   2   3   
 * pin: F5  F4  F1  F0
 */
static void unselect_rows(void)
{
    // Hi-Z(DDR:0, PORT:0) to unselect
    DDRF  &= ~0b00110011;
    PORTF &= ~0b00110011;
}

static void select_row(uint8_t row)
{
    // Output low(DDR:1, PORT:0) to select
    switch (row) {
        case 0:
            DDRF  |= (1<<5);
            PORTF &= ~(1<<5);
            break;
        case 1:
            DDRF  |= (1<<4);
            PORTF &= ~(1<<4);
            break;
        case 2:
            DDRF  |= (1<<1);
            PORTF &= ~(1<<1);
            break;
        case 3:
            DDRF  |= (1<<0);
            PORTF &= ~(1<<0);
            break;
    }
}
