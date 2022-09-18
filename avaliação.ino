// C++ code
//
void setup()
{
  pinMode(13, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(12, INPUT);
}

void loop()
{
  Serial.println(digitalRead(13));
  if (digitalRead(13) == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    delay(3000); // Wait for 3000 millisecond(s)
    if (digitalRead(12) == 0) {
      digitalWrite(13, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      delay(10000); // Wait for 10000 millisecond(s)
    }
  }
}