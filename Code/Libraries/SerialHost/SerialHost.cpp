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

}
bool SerialHost::requestData(){
	
}