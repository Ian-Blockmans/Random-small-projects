void setup() {
  // put your setup code here, to run once:
  pinMode(PC13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PC13,HIGH);
  delay(1000);
  digitalWrite(PC13,LOW);
  delay(1000);
  Serial.println("hello");
}
