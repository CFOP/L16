#include "Arduino.h"
class Compass::Compass
{
	int compassAddress;
	float Compass::getValues(){
		/*
		El requestFrom es los valores que mandan x,y,z solo usaremos x,y pero z se incluye para que sea exacto,
		cada uno manda dos valores uno 0-255 y otro deforme por lo cual es seis en total.
		*/
		Wire.beginTransmission(compassAddress);
		Wire.write(0x00);
		Wire.requestFrom(6):
		Wire.endTransmission();
	}
	Compass::Compass(int address){
		compassAddress=address;
	}
}