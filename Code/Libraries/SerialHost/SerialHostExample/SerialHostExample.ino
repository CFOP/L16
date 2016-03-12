#include <SerialHost.h>
SerialHost host(19200);
byte* k;
//a little of heaven
void setup(){
  Serial.begin(19200);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  host.init(SERIAL1);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}
void loop(){
  k=host.read(SERIAL1,2);
  if(k[0]==0){
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
  }
  else if(k[0]==1){
    analogWrite(12,k[1]);
    digitalWrite(11,LOW);
  }
  else{
    analogWrite(11,k[1]);
    digitalWrite(12,LOW);
  }
}
