#ifndef AnalogMultiplexer_h
#define AnalogMultiplexer_h
class AnalogMultiplexer{
	private:
		int portLength;
		int portOffset;
		int analogPort;
	public:
		AnalogMultiplexer(int ports,int offset,int analogReadingPort);
		void openPort(int port);
		int getPortValue();
};
#endif