void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  while(i<17){
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(1000);
  i++;
  }
  digitalWrite(13, LOW);
  delay(11000);
  
}
