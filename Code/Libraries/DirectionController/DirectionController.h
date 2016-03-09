#ifndef DirectionController_h
#define DirectionController_h
#define MOTOR1 0
#define MOTOR2 1
class DirectionController{
	private:
		MotorController* controller1;
		MotorController* controller2;
	public:
		DirectionController(int,int,int,int,int,int,int,bool,bool,int,int,int,int,int,int,int,bool,bool);
		void forward();
		void diagonal();
		void right();
		void left();
		void diagTR();
		void diagBR();
		void diagTL();
		void diagTB();
};
#endif