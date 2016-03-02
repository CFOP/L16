#ifndef SerialHost_h
#define SerialHost_h
#include <Arduino.h>
#include <SoftwareSerial.h>
class SerialDevice{
	private:
		int txPort;
		int rxPort;
		SoftwareSerial* serialHost;
	public:
		SerialHost(int,int,int);
		byte[] read();
		bool getAvailable();
};
#endif