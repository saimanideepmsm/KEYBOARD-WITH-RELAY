int relay1 = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(relay1,OUTPUT);
  digitalWrite(relay1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay1,HIGH);
  delay(500);
  digitalWrite(relay1,LOW);
  delay(500);

}
