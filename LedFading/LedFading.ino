const int ledPin = 3;

int potVal;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(A0);
  potVal = map(potVal, 0, 1023, 0, 255);
  Serial.println(potVal);
  analogWrite(ledPin, potVal);
}
