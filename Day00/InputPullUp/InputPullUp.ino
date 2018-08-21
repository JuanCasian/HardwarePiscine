#define BTN1 2
#define BTN2 3

const int ledPin1 = 4;
const int ledPin2 = 5;

int btn1read;
int btn2read;

void setup()
{
  Serial.begin(9600);
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  btn1read = digitalRead(BTN1);
  btn2read = digitalRead(BTN2);

  if (!btn1read)
  {
     digitalWrite(ledPin1, HIGH);
  } else {
     digitalWrite(ledPin1, LOW);
  }

  if (!btn2read)
  {
     digitalWrite(ledPin2, HIGH);
  } else {
     digitalWrite(ledPin2, LOW);
  } 
 
  Serial.print("Btn 1 read: ");
  Serial.print(btn1read);
  Serial.print("    Btn 2 read: ");
  Serial.println(btn2read);
}

