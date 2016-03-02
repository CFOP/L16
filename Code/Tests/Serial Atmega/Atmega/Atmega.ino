int a;
void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Serial.begin(19200);
}

void loop() {
  a=analogRead(A1);
  Serial.write(a);
  /*if(a<100){
    digitalWrite(13, HIGH);
    Serial.write(10);
  }
  else if(a>300){
    digitalWrite(13, LOW);
    Serial.write(300);
  }
  else {
    digitalWrite(13, LOW);
    Serial.write(500);
  }*/
}
