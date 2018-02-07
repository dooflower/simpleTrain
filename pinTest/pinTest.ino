void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(11,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(2))Serial.println("2");
  if(!digitalRead(3))Serial.println("3");
  if(!digitalRead(4))Serial.println("4");
  if(!digitalRead(5))Serial.println("5");
  if(!digitalRead(6))Serial.println("6");
  if(!digitalRead(7))Serial.println("7");
  if(!digitalRead(10))Serial.println("10");
  if(!digitalRead(11))Serial.println("11");

  Serial.println(" ");
  delay(100);
}
