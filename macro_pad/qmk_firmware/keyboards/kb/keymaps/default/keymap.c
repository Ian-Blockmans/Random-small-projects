#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_0, KC_1, KC_2, KC_3, 
		KC_4, KC_5, KC_6, KC_7, 
		KC_8, KC_9, KC_A, KC_B, 
		KC_C, KC_D, KC_E, MO(1)),

	KEYMAP(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, 
		BL_INC, KC_TRNS, KC_TRNS, KC_TRNS, 
		BL_DEC, BL_TOGG, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, MO(0)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	//keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}

void backlight_init_ports(void) {
    // Optional - runs on startup
    //   Usually you want to configure pins here
	DDRB |= (1<<0);
	DDRB |= (1<<1);
	DDRB |= (1<<2);
	DDRB |= (1<<3);
	
	PORTB |= (1<<0);
	PORTB |= (1<<1);
	PORTB |= (1<<2);
	PORTB |= (1<<3);
	
	
	DDRB |= (1<<4);
	DDRB |= (1<<5);
	DDRB |= (1<<6);
	DDRB |= (1<<7);
	DDRD |= (1<<0);
	DDRD |= (1<<1);
	DDRD |= (1<<2);
	DDRD |= (1<<3);
	DDRD |= (1<<4);
	DDRD |= (1<<5);
	DDRD |= (1<<6);
	DDRD |= (1<<7);
	
	PORTB |= (1<<4);
	PORTB |= (1<<5);
	PORTB |= (1<<6);
	PORTB |= (1<<7);
	PORTD |= (1<<0);
	PORTD |= (1<<1);
	PORTD |= (1<<2);
	PORTD |= (1<<3);
	PORTD |= (1<<4);
	PORTD |= (1<<5);
	PORTD |= (1<<6);
	PORTD |= (1<<7);
}

uint8_t lev;

void backlight_set(uint8_t level) {
    // Optional - runs on level change
    //   Usually you want to respond to the new value
	lev = level;
}

void bl_off(void){
	PORTB |= (1<<0);
	PORTB |= (1<<1);
	PORTB |= (1<<2);
	PORTB |= (1<<3);
	
	PORTB |= (1<<4);
	PORTB |= (1<<5);
	PORTB |= (1<<6);
	PORTB |= (1<<7);
	PORTD |= (1<<0);
	PORTD |= (1<<1);
	PORTD |= (1<<2);
	PORTD |= (1<<3);
	PORTD |= (1<<4);
	PORTD |= (1<<5);
	PORTD |= (1<<6);
	PORTD |= (1<<7);
}

void bl_white(void){
	static uint8_t cycle = 1;
	if(cycle == 1){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<0);
		
		PORTD &= ~(1<<7);
		PORTD &= ~(1<<6);
		PORTD &= ~(1<<4);
		cycle++;
	}
	else if(cycle == 2){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<0);
		
		PORTD &= ~(1<<5);
		PORTD &= ~(1<<3);
		PORTD &= ~(1<<2);
		cycle++;
	}
	else if(cycle == 3){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<0);
		
		PORTD &= ~(1<<1);
		PORTD &= ~(1<<0);
		PORTB &= ~(1<<7);
		cycle++;
	}
	else if(cycle == 4){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<0);
		
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<4);
		cycle++;
	}
	
	
	else if(cycle == 5){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<1);
		
		PORTD &= ~(1<<7);
		PORTD &= ~(1<<6);
		PORTD &= ~(1<<4);
		cycle++;
	}
	else if(cycle == 6){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<1);
		
		PORTD &= ~(1<<5);
		PORTD &= ~(1<<3);
		PORTD &= ~(1<<2);
		cycle++;
	}
	else if(cycle == 7){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<1);
		
		PORTD &= ~(1<<1);
		PORTD &= ~(1<<0);
		PORTB &= ~(1<<7);
		cycle++;
	}
	else if(cycle == 8){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<1);
		
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<4);
		cycle++;
	}
	
	
	else if(cycle == 9){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<2);
		
		PORTD &= ~(1<<7);
		PORTD &= ~(1<<6);
		PORTD &= ~(1<<4);
		cycle++;
	}
	else if(cycle == 10){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<2);
		
		PORTD &= ~(1<<5);
		PORTD &= ~(1<<3);
		PORTD &= ~(1<<2);
		cycle++;
	}
	else if(cycle == 11){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<2);
		
		PORTD &= ~(1<<1);
		PORTD &= ~(1<<0);
		PORTB &= ~(1<<7);
		cycle++;
	}
	else if(cycle == 12){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<2);
		
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<4);
		cycle++;
	}
	
	
	else if(cycle == 13){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<3);
		
		PORTD &= ~(1<<7);
		PORTD &= ~(1<<6);
		PORTD &= ~(1<<4);
		cycle++;
	}
	else if(cycle == 14){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<3);
		
		PORTD &= ~(1<<5);
		PORTD &= ~(1<<3);
		PORTD &= ~(1<<2);
		cycle++;
	}
	else if(cycle == 15){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<3);
		
		PORTD &= ~(1<<1);
		PORTD &= ~(1<<0);
		PORTB &= ~(1<<7);
		cycle++;
	}
	else if(cycle == 16){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB &= ~(1<<3);
		
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<4);
		cycle = 1;
	}
}

void bl_black(void){ //atempt time match with white for dimming
	PORTB |= (1<<0);
	PORTB |= (1<<1);
	PORTB |= (1<<2);
	PORTB |= (1<<3);
	
	PORTB |= (1<<4);
	PORTB |= (1<<5);
	PORTB |= (1<<6);
	PORTB |= (1<<7);
	PORTD |= (1<<0);
	PORTD |= (1<<1);
	PORTD |= (1<<2);
	PORTD |= (1<<3);
	PORTD |= (1<<4);
	PORTD |= (1<<5);
	PORTD |= (1<<6);
	PORTD |= (1<<7);
	
	//for(int i = 0; i < 10; i++){}
	
	/*static uint8_t cycle = 1;
	if(cycle == 1){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<0);
		
		PORTD |= (1<<7);
		PORTD |= (1<<6);
		PORTD |= (1<<4);
		cycle++;
	}
	else if(cycle == 2){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<0);
		
		PORTD |= (1<<5);
		PORTD |= (1<<3);
		PORTD |= (1<<2);
		cycle++;
	}
	else if(cycle == 3){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<0);
		
		PORTD |= (1<<1);
		PORTD |= (1<<0);
		PORTB |= (1<<7);
		cycle++;
	}
	else if(cycle == 4){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<0);
		
		PORTB |= (1<<6);
		PORTB |= (1<<5);
		PORTB |= (1<<4);
		cycle++;
	}
	
	
	else if(cycle == 5){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<1);
		
		PORTD |= (1<<7);
		PORTD |= (1<<6);
		PORTD |= (1<<4);
		cycle++;
	}
	else if(cycle == 6){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<1);
		
		PORTD |= (1<<5);
		PORTD |= (1<<3);
		PORTD |= (1<<2);
		cycle++;
	}
	else if(cycle == 7){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<1);
		
		PORTD |= (1<<1);
		PORTD |= (1<<0);
		PORTB |= (1<<7);
		cycle++;
	}
	else if(cycle == 8){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<1);
		
		PORTB |= (1<<6);
		PORTB |= (1<<5);
		PORTB |= (1<<4);
		cycle++;
	}
	
	
	else if(cycle == 9){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<2);
		
		PORTD |= (1<<7);
		PORTD |= (1<<6);
		PORTD |= (1<<4);
		cycle++;
	}
	else if(cycle == 10){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<2);
		
		PORTD |= (1<<5);
		PORTD |= (1<<3);
		PORTD |= (1<<2);
		cycle++;
	}
	else if(cycle == 11){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<2);
		
		PORTD |= (1<<1);
		PORTD |= (1<<0);
		PORTB |= (1<<7);
		cycle++;
	}
	else if(cycle == 12){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<2);
		
		PORTB |= (1<<6);
		PORTB |= (1<<5);
		PORTB |= (1<<4);
		cycle++;
	}
	
	
	else if(cycle == 13){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<3);
		
		PORTD |= (1<<7);
		PORTD |= (1<<6);
		PORTD |= (1<<4);
		cycle++;
	}
	else if(cycle == 14){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<3);
		
		PORTD |= (1<<5);
		PORTD |= (1<<3);
		PORTD |= (1<<2);
		cycle++;
	}
	else if(cycle == 15){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<3);
		
		PORTD |= (1<<1);
		PORTD |= (1<<0);
		PORTB |= (1<<7);
		cycle++;
	}
	else if(cycle == 16){
		PORTB = 0xff;
		PORTD = 0xff;
		
		PORTB |= (1<<3);
		
		PORTB |= (1<<6);
		PORTB |= (1<<5);
		PORTB |= (1<<4);
		cycle = 1;
	}*/
}

void backlight_task(void) { //led effects here
    // Optional - runs periodically
    //   Note that this is called in the main keyboard loop,
    //   so long running actions here can cause performance issues
	//uint8_t count = 0;
	switch(lev) {
		case 0:
			bl_off();
			break;
		case 1:
			for(int i = 0; i < 20; i++){
				bl_white();
			}
			bl_black();
			break;
		case 2:
			for(int i = 0; i < 40; i++){
				bl_white();
			}
			bl_black();
			break;
		case 3:
			bl_white();
			break;
		default:
			bl_off();
			break;
	}
}