#ifndef SerialDevice_h
#define SerialDevice_h
#include <Arduino.h>
#include <SoftwareSerial.h>
class SerialDevice{
	private:
		int txPort;
		int rxPort;
		int serialRate;
		SoftwareSerial* serialDev;
	public:
		SerialDevice(int,int,int);
		void init();
		void write(byte*,int,int);
		bool requested();
};
#endif