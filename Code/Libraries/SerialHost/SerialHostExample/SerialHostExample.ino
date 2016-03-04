#include <SoftwareSerial.h>
#include <SerialHost.h>
SerialHost host(0,1,19200);
byte* k;
void setup(){
  pinMode(5,OUTPUT);
  host.init();
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
}
void loop(){
  k=host.read(3);
  if(k[1]=='t'){
    digitalWrite(5,HIGH);
    delay(1000);
  }
  digitalWrite(5,LOW);
}
