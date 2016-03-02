#include "SerialDevice.h";
#include "Arduino.h";
#include "SoftwareSerial.h";
SerialDevice::SerialDevice(int tx,int rx,int rate){
	txPort=tx;
	rxPort=rx;
	serialDev=new SoftwareSerial(txPort,rxPort);
	serialDev[0].begin(rate);
}
void SerialDevice::writeString(String k){
	serialDev[0].print(k);
}
void SerialDevice::writeByteArray(byte* array){
	serialDev[0].print("s"+sizeof(array));
	for(int i=0;i<sizeof(array);i++){
		serialDev[0].print(array[i]);
	}
}
bool SerialDevice::getAvailable(){
	if(serialDev[0].available()){
		return true;
	}
	else{
		return false;
	}
}