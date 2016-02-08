#include "Arduino.h"
#include "AnalogMultiplexer.h"
AnalogMultiplexer::AnalogMultiplexer(int ports,int offset,int analogReadingPort){
	portLength=ports;
	portOffset=offset;
	analogPort=analogReadingPort;
}
void AnalogMultiplexer::openPort(int port){
	int currentPort=port;
	for(int i=0;i<portLength;i++){
		if((currentPort%2)>0){
			digitalWrite((portOffset+i),HIGH);
		}
		else{
			digitalWrite((portOffset+i),LOW);
		}
		currentPort/=2;
	}
}
int AnalogMultiplexer::getPortValue(){
	return analogRead(analogPort);
}