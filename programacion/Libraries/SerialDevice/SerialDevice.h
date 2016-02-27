#ifndef SerialDevice_h
#define SerialDevice_h
#include <SoftwareSerial.h>
#include <Arduino.h>
class SerialDevice{
	private:
		int txPort;
		int rxPort;
		SoftwareSerial* serialDev;
	public:
		SerialDevice(int,int);
		void send(String k);
		bool getAvailable();
};
#endif