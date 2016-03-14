#include "SerialMicroDevice.h";
#include "Arduino.h";
#define MILLION 1000000
SerialDevice::SerialDevice(int rate){
	serialRate=rate;
}
void SerialDevice::init(){
	Serial1.begin(serialRate);
}
void SerialDevice::write(byte* msg,int msgLength,int offset){
	for(int i=offset;i<msgLength;i++){
		Serial1.print((char)msg[i]);
	}
}
bool SerialDevice::requested(){
	if(Serial1.available()>0){
		while(Serial1.available()>0){
			Serial1.read();
			delayMicroseconds(MILLION/serialRate*10);
		}
		return true;
	}
	else{
		return false;
	}
}