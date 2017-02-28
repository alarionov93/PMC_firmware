/*
  Header

  Description
*/
int counter = 0;
int btn_value = 0;
void setup() {
  // Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(24, INPUT);
  delay(1000);
  digitalWrite(2, HIGH);
}

void loop() {
  counter += !digitalRead(50);
  if (counter > 20) digitalWrite(2, LOW);
  delay(10);
}