const int ledPin = 2;
const int buttonPin = 4;

int buttonStatus;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonStatus = digitalRead(buttonPin);
  Serial.println(buttonPin);
  if (buttonStatus == HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
