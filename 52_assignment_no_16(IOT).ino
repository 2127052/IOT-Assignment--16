// C++ code
//
int Moisture_data=0;
void setup()
{
  pinMode(A4, INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Moisture_data =analogRead(A4);
  Serial.println(Moisture_data);
  if (Moisture_data < 21)
  {
    digitalWrite(8, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(8, LOW);
    delay(100);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
     }
    else 
    {
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
  }
  delay(10);
  // Wait for 1000 millisecond(s)
}
