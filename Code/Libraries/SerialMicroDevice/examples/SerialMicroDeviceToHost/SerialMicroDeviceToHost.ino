#include <SerialMicroDevice.h>
SerialDevice microDevice(19200);
byte array[2]={'e','0'};
void setup() {
  // put your setup code here, to run once:
  microDevice.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(microDevice.requested()){
    microDevice.write(array,2,0);
  }
}
