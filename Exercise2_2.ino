const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  if(digitalRead(buttonPin) == LOW){
    Serial.println("LIGHT IS ON");
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  else{
     Serial.println("LIGHT IS OFF");
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
  }
}
