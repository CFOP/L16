#include "Arduino.h";
#include "Photoresistor.h";
Photoresistor::Photoresistor(int port1,int port2,int port3,int port4)
{
prt1=port1;
prt2=port2;
prt3=port3;
prt4=port4;
max=0;
min=1023;
}
void Photoresistor::calibrate()
{
	int maxValue=0;
	int minValue=1023;
	int read;
	read=analogRead(prt1);
	if(read>maxValue){
		maxValue=read;
	}
	if(read<minValue){
		minValue=read;
	}

	read=analogRead(prt2);
	if(read>maxValue){
		maxValue=read;
	}
	if(read<minValue){
		minValue=read;
	}

	read=analogRead(prt3);
	if(read>maxValue){
		maxValue=read;
	}
	if(read<minValue){
		minValue=read;
	}

	read=analogRead(prt4);
	if(read>maxValue){
		maxValue=read;
	}
	if(read<minValue){
		minValue=read;
	}



	if(minValue<min){
		min=minValue;
	}
	if(maxValue>max){
		max=maxValue;
	}
	int Photoresistor::getReading(){	
		int read;
		read=analogRead(prt1);
		if(read<((max+min)/2)){
			return 1;
		}
		read=analogRead(prt2);
		if(read<((max+min)/2)){
			return 1;
		}
		read=analogRead(prt3);
		if(read<((max+min)/2)){
			return 1;
		}
		read=analogRead(prt4);
		if(read<((max+min)/2)){
			return 1;
		}

		return 0;
	}

}