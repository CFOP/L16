#include "SerialHost.h";
#include "Arduino.h";
#include "SoftwareSerial.h";
SerialHost::SerialHost(int tx,int rx,int rate){
	txPort=tx;
	rxPort=rx;
	serialHost=new SoftwareSerial(txPort,rxPort);
	serialHost[0].begin(rate);
}
byte[] SerialHost::read(){
	if(serialHost[0].available){
		serialHost[0].read();
		int length=(int)serialHost[0].read();
		byte result[]
		while(serialHost[0].available){
			serialHost[0].read();
		}
		return result;
	}
	else{
		requestData();
		return read();
	}
}
void SerialHost::requestData(){
	serialHost[0].write("a");
}