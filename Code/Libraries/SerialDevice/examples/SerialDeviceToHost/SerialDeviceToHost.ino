#include <Wire.h>
#include <HMC5583L.h>
#include <SoftwareSerial.h>
#include <SerialDevice.h>
HMC5583L compass(HMC5583L_DEFAULT_ADDRESS);
SerialDevice dev(0,1,19200);
byte msg[2];
void setup(){
  Wire.begin();
  pinMode(5,INPUT);
  dev.init();
  compass.initialize();
  compass.setStartingAngle();
}
void loop(){
  float angle=compass.getAngle();
  if(digitalRead(5)){
    compass.setStartingAngle();
  }
  if(angle<=10.0f||angle>=350.0f){
    msg[0]=(byte)0;
    msg[1]=(byte)0;
  }
  if(angle>5.0f&&angle<180.0f){
    msg[0]=(byte)1;
    msg[1]=(byte)(((angle+15.0f)/195.0f)*255.0f);
  }
  if(angle>=180.0f&&angle<355.0f){
    msg[0]=(byte)2;
    msg[1]=(byte)(((360.0f-(angle)+15.0f)/195.0f)*255.0f);
  }
  if(dev.requested()){
    dev.write(msg,2,0);
  }
}
