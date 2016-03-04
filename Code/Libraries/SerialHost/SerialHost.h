#ifndef SerialHost_h
#define SerialHost_h
#include <Arduino.h>
#include <SoftwareSerial.h>
class SerialHost{
	private:
		int txPort;
		int rxPort;
		int serialRate;
		SoftwareSerial* serialHost;
	public:
		SerialHost(int,int,int);
		void init();
		byte* read(int);
		void requestData();
};
#endif