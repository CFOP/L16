#ifndef Photoresistor_h
#define Photoresistor_h
class Photoresistor{
	private:
		int prt1;
		int prt2;
		int prt3;
		int max;
		int min;
		int max2;
		int min2;
		int max3;
		int min3;
	public:
		Photoresistor(int,int,int);
		void calibrate();
		int getReading();
};
#endif
