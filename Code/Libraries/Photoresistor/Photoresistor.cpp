#include "Arduino.h";
#include "Photoresistor.h";
Photoresistor::Photoresistor(int port1,int port2,int port3){
prt1=port1;
prt2=port2;
prt3=port3;
max=0;
min=1023;
max2=0;
min2=1023;
max3=0;
min3=1023;
}
void Photoresistor::calibrate(){
	int read;
	read=analogRead(prt1);
	if(read>max){
		max=read;
	}
	if(read<min){
		min=read;
	}

	read=analogRead(prt2);
	if(read>max2){
		max2=read;
	}
	if(read<min2){
		min2=read;
	}

	read=analogRead(prt3);
	if(read>max3){
		max3=read;
	}
	if(read<min3){
		min3=read;
 }
}
int Photoresistor::getReading(){	
	int read;
	read=analogRead(prt1);
	if(read<((max+min)/2)){
		return 1;
	}
	read=analogRead(prt2);
	if(read<((max2+min2)/2)){
		return 1;
	}
	read=analogRead(prt3);
	if(read<((max3+min3)/2)){
		return 1;
 }
 return 0;
}