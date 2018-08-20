int potVal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(A0);
  Serial.print("Value of Pot: ");
  Serial.println(potVal);
}
