import lejos.nxt.*;
import java.util.*;
public class PIDTest{
	public static void main(String[] args) {
		PID pid=new PID(900.0f,100.0f,100.0f,0.0f);
		int setPoint=1024;
		pid.setSetpoint((float)setPoint);
		int b=0;
		while((b=MotorPort.A.getTachoCount())!=setPoint){
			pid.process((int)System.currentTimeMillis(),(float)b);
			int speed=((int)pid.getValues())%900;
			Motor.A.setSpeed(Math.abs(speed));
			if(speed>0){
				Motor.A.forward();
			}
			else{
				Motor.A.backward();
			}
		}
		Motor.A.setSpeed(0);
		Motor.A.stop();
	}
}