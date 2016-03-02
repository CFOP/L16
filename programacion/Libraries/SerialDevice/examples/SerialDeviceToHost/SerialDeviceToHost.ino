#include <SoftwareSerial.h>
#include <SerialDevice.h>
SerialDevice dev(0,1,9600);
byte k[3]={'0','a','d'};
void setup(){
  dev.init();
}
void loop(){
  if(dev.requested())
    dev.write(k,3,0);
}
