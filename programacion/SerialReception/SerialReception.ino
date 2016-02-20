String msg;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    msg="";
    while(Serial.available()){
      msg+=(char)Serial.read();
      //1,000,000/velocidad(57600) x 10
      delayMicroseconds(170);
    }
    Serial.println("Received: "+msg);
  }
}
