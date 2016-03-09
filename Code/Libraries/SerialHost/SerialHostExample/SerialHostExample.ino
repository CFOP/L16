#include <SerialHost.h>
SerialHost host(19200);
byte* k;
void setup(){
  pinMode(5,OUTPUT);
  host.init(SERIAL1);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
}
void loop(){
  k=host.read(SERIAL1,2);
    analogWrite(5,(int)k[0]);
}
