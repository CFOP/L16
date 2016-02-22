#ifndef MotorControler_h
#define MotorControler_h
#define MOTOR1 0
#define MOTOR2 1
class HMC5583L{
	private:
		int dF1;
		int dF2;

		int portPower1;
		int portM1D1;
		int portM1D2;

		int portPower2;
		int portM2D1;
		int portM2D2;

		bool inverted1;
		bool inverted2;

		int speed1;
		int speed2;
	public:
		MotorController(int,int,int,int,int,int,int,int,bool,bool);
		void invert(short);
		void turnOn(short);
		void turnOff(short);
		void setSpeed1(short,int);
		void setSpeed2(int,int);
		void forward(short);
		void backward(short);
		void (short);
};
#endif