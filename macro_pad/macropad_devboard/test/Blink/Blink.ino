
const int PB0 = LED_BUILTIN_TX;
const int PD5 = LED_BUILTIN_RX;
const int PF7 = A0;
const int PF6 = A1;
const int PF5 = A2;
const int PF4 = A3;
const int PF1 = A4;
const int PF0 = A5;
const int PD2 = 0;
const int PD3 = 1;
const int PD1 = 2;
const int PD0 = 3;
const int PD4 = 4;
const int PC6 = 5;
const int PD7 = 6;
const int PE6 = 7;
const int PB4 = 8;
const int PB5 = 9;
const int PB6 = 10;
const int PB7 = 11;
const int PD6 = 12;
const int PC7 = 13;
const int PB3 = 14;
const int PB1 = 15;
const int PB2 = 16;

// the setup() method runs once, when the sketch starts

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(LED_BUILTIN_TX,INPUT);
  pinMode(LED_BUILTIN_RX,INPUT);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  digitalWrite(ledPin, HIGH);   // set the LED on
  delayMicroseconds(100);                  // wait for a second
  digitalWrite(ledPin, LOW);    // set the LED off
  delayMicroseconds(400);                  // wait for a second
}
