#ifndef SerialMicroDevice_h
#define SerialMicroDevice_h
#include <Arduino.h>
class SerialDevice{
	private:
		int serialRate;
	public:
		SerialDevice(int);
		void init();
		void write(byte*,int,int);
		bool requested();
};
#endif