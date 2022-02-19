int pin = 11;

void setup()
{
  pinMode(pin, OUTPUT);          // sets the digital pin 13 as output
}

void loop()
{
  digitalWrite(pin, HIGH);       // sets the digital pin 13 on
  delay(1000);                  // waits for a second
  digitalWrite(pin, LOW);        // sets the digital pin 13 off
  delay(1000);                  // waits for a second
}