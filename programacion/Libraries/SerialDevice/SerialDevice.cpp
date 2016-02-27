#include "SerialDevice.h";
#include "Arduino.h";
#include "SoftwareSerial.h";
SerialDevice::SerialDevice(int tx,int rx){
	txPort=tx;
	rxPort=rx;
}
void SerialDevice::initialize(){
	serialDev=new SoftwareSerial(tx,rx);
}
void SerialDevice::send(String k){
	serilDev[0].print(k);
}
bool SerialDevice::getAvailable(){
	if(serialDev[0].available()){
		return true;
	}
	else{
		return false;
	}
}