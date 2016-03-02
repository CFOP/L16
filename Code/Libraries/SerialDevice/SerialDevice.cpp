#include "SerialDevice.h";
#include "Arduino.h";
#include "SoftwareSerial.h";
#define MILLION 1000000
SerialDevice::SerialDevice(int tx,int rx,int rate){
	txPort=tx;
	rxPort=rx;
	serialRate=rate;
}
void SerialDevice::init(){
	serialDev=new SoftwareSerial(txPort,rxPort);
	serialDev[0].begin(serialRate);
}
void SerialDevice::write(byte* msg,int msgLength,int offset){
	for(int i=offset;i<msgLength;i++){
		serialDev[0].print((char)msg[i]);
	}
}
bool SerialDevice::requested(){
	if(serialDev[0].available()>0){
		while(serialDev[0].available()>0){
			serialDev[0].read();
			delayMicroseconds(MILLION/serialRate*10);
		}
		return true;
	}
	else{
		return false;
	}
}