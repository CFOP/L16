int a;
void setup() {
  Serial.begin(19200);
  pinMode(10, OUTPUT);
}

void loop() {
  a=Serial.read();
  if(a!=-1){
    analogWrite(10, a);
    Serial.println(a);
  }
}
