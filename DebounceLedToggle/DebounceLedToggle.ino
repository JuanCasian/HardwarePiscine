const int ledPin = 3;
const int buttonPin = 2;
const long pressDelay = 60;

int ledStatus = HIGH;
int buttonStatus = LOW;
int lastButtonStatus = LOW;
long lastDebounceTime = 0;
int reading;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(ledPin, ledStatus);
}

void loop()
{
  reading = digitalRead(buttonPin);

  if (reading != lastButtonStatus)
  {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > pressDelay)
  {
    if (reading != buttonStatus)
    {
      buttonStatus = reading;
      if (buttonStatus == HIGH)
      {
       ledStatus = !ledStatus;
      }
    }
  }
  digitalWrite(ledPin, ledStatus);
  lastButtonStatus = reading;
}

