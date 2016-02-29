#ifndef Photoresistor_h
#define Photoresistor_h
class Photoresistor{
	private:
		int prt1;
		int prt2;
		int prt3;
		int prt4;
		int max;
		int min;
	public:
		Photoresistor(int,int,int,int);
		void calibrate();
		int getReading();
};
#endif