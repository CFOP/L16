#ifndef SerialDevice_h
#define SerialDevice_h
#include <Arduino.h>
#include <SoftwareSerial.h>
class SerialDevice{
	private:
		int txPort;
		int rxPort;
		SoftwareSerial* serialDev;
	public:
		SerialDevice(int,int,int);
		void writeString(String);
		void writeByteArray(byte[]);
		bool getAvailable();
};
#endif