#include "SerialHost.h";
#include "Arduino.h";
#include "SoftwareSerial.h";
#define MILLION 1000000
SerialHost::SerialHost(int tx,int rx,int rate){
	txPort=tx;
	rxPort=rx;
	serialRate=rate;
}
void SerialHost::init(){
	serialHost=new SoftwareSerial(txPort,rxPort);
	serialHost[0].begin(serialRate);
}
byte* SerialHost::read(int msgLength){
	if(serialHost[0].available()>0){
		byte result[msgLength];
		for(int i=0;i<msgLength;i++){
			if(serialHost[0].available()>0){
				result[i]=serialHost[0].read();
				delayMicroseconds((MILLION/serialRate)*10);
			}
			else{
				result[i]=0;
			}
		}
		while(serialHost[0].available()>0){
			serialHost[0].read();
		}
		return result;
	}
	else{
		requestData();
		return read(msgLength);
	}
}
void SerialHost::requestData(){
	serialHost[0].print("0");
	delayMicroseconds((MILLION/serialRate));
}