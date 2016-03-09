#include <SoftwareSerial.h>
#include <SerialDevice.h>
SerialDevice dev(0,1,19200);
byte k[2]={'e','0'};
int message=255;
bool dir=true;
void setup(){
  dev.init();
}
void loop(){
  k[1]=(byte)message;
  if(dev.requested()){
    dev.write(k,2,0);
    if(dir){
      if(message<255){
        message++;
      }
      else{
        dir=false;
      }
    }
    else{
      if(message>0){
        message--;
      }
      else{
        dir=true;
      }
    }
  }
}
