// C++ code
//
int celsius = 0;
int fahrenheit = 0;

void setup()
{
  
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // measure temperature in Celsius
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  // convert to Fahrenheit
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  delay(1000); // Wait for 1000 millisecond(s)
}