//#include <TimerFour.h>
#include <Keyboard.h>

const int R1 = LED_BUILTIN_RX;
const int C4 = LED_BUILTIN_TX;
const int SR2 = A0;
const int SR1 = A1;
const int SC4 = A2;
const int SC3 = A3;
const int SC2 = A4;
const int SC1 = A5;
const int C6 = 0;
const int C5 = 1;
const int C7 = 2;
const int C8 = 3;
const int C3 = 4;
const int SR3 = 5;
const int C1 = 6;
const int C12 = 8;
const int C11 = 9;
const int C10 = 10;
const int C9 = 11;
const int C2 = 12;
const int SR4 = 13;
const int R4 = 14;
const int R2 = 15;
const int R3 = 16;

// the setup() method runs once, when the sketch starts
void cycle_leds(void);
void TimerHandler(void);
void get_col(int row);

void setup() {
  // initialize the digital pins.
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(C12, OUTPUT);
  pinMode(C11, OUTPUT);
  pinMode(C10, OUTPUT);
  pinMode(C9, OUTPUT);
  pinMode(C8, OUTPUT);
  pinMode(C7, OUTPUT);
  pinMode(C6, OUTPUT);
  pinMode(C5, OUTPUT);
  pinMode(C4, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(SC1, INPUT);
  pinMode(SC2, INPUT);
  pinMode(SC3, INPUT);
  pinMode(SC4, INPUT);
  pinMode(SR1, OUTPUT);
  pinMode(SR2, OUTPUT);
  pinMode(SR3, OUTPUT);
  pinMode(SR4, OUTPUT);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(C12, HIGH);
  digitalWrite(C11, HIGH);
  digitalWrite(C10, HIGH);
  digitalWrite(C9, HIGH);
  digitalWrite(C8, HIGH);
  digitalWrite(C7, HIGH);
  digitalWrite(C6, HIGH);
  digitalWrite(C5, HIGH);
  digitalWrite(C4, HIGH);
  digitalWrite(C3, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(SR1, LOW);
  digitalWrite(SR2, LOW);
  digitalWrite(SR3, LOW);
  digitalWrite(SR4, LOW);

  //keyboard
  Keyboard.begin();

  //timer setup
  //Timer4.initialize(1000);//us
  //Timer4.attachInterrupt(TimerHandler);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  cycle_leds();
}


void poll(void) {
  digitalWrite(SR1, LOW);
  get_col(1);
  digitalWrite(SR1, HIGH);
  digitalWrite(SR2, LOW);
  get_col(2);
  digitalWrite(SR2, HIGH);
  digitalWrite(SR3, LOW);
  get_col(3);
  digitalWrite(SR3, HIGH);
  digitalWrite(SR4, LOW);
  get_col(4);
  digitalWrite(SR4, HIGH);
}

void get_col(int row) {
  static int presed = 0;
  static int released = 1;
  if (digitalRead(SC1) == 0) {
    if (presed == 0) {
      switch (row) {
        case 1:
          Keyboard.press('F');
          break;
        case 2:
          Keyboard.press('E');
          break;
        case 3:
          Keyboard.press('D');
          break;
        case 4:
          Keyboard.press('C');
          break;
      }
      presed = 1;
      released = 0;
    }
  }
  if (digitalRead(SC2) == 0) {
    if (presed == 0) {
      switch (row) {
        case 1:
          Keyboard.press('B');
          break;
        case 2:
          Keyboard.press('A');
          break;
        case 3:
          Keyboard.press('9');
          break;
        case 4:
          Keyboard.press('8');
          break;
      }
      presed = 1;
      released = 0;
    }
  }
  if (digitalRead(SC3) == 0) {
    if (presed == 0) {
      switch (row) {
        case 1:
          Keyboard.press('7');
          break;
        case 2:
          Keyboard.press('6');
          break;
        case 3:
          Keyboard.press('5');
          break;
        case 4:
          Keyboard.press('4');
          break;
      }
      presed = 1;
      released = 0;
    }
  }
  if (digitalRead(SC4) == 0) {
    if (presed == 0) {
      switch (row) {
        case 1:
          Keyboard.press('3');
          break;
        case 2:
          Keyboard.press('2');
          break;
        case 3:
          Keyboard.press('1');
          break;
        case 4:
          Keyboard.press('0');
          break;
      }
      presed = 1;
      released = 0;
    }

  }
  if (digitalRead(SC4) == 1 && digitalRead(SC3) == 1 && digitalRead(SC2) == 1 && digitalRead(SC1) == 1) {
    if(released == 0){
      Keyboard.releaseAll();
      released = 1;
      presed = 0;
      }
  }
}

void cycle_leds(void) {
  digitalWrite(R1, LOW);
  cycle_col();
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  cycle_col();
  digitalWrite(R2, HIGH);
  digitalWrite(R3, LOW);
  cycle_col();
  digitalWrite(R3, HIGH);
  digitalWrite(R4, LOW);
  cycle_col();
  digitalWrite(R4, HIGH);
}

void cycle_col(void) {
  digitalWrite(C1, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C1, HIGH);
  digitalWrite(C2, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C2, HIGH);
  digitalWrite(C3, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C3, HIGH);
  digitalWrite(C4, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C4, HIGH);
  digitalWrite(C5, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C5, HIGH);
  digitalWrite(C6, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C6, HIGH);
  digitalWrite(C7, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C7, HIGH);
  digitalWrite(C8, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C8, HIGH);
  digitalWrite(C9, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C9, HIGH);
  digitalWrite(C10, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C10, HIGH);
  digitalWrite(C11, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C11, HIGH);
  digitalWrite(C12, LOW);

  poll(); delayMicroseconds(100);
  digitalWrite(C12, HIGH);
}
