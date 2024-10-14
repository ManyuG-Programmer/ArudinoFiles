void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println(digitalRead(2));
    delay(500);
}
