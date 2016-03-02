import lejos.nxt.*;
import java.util.*;
public class PIDTest2{
	public static void main(String[] args) {
		PID pid=new PID(900.0f,100.0f,100.0f,0.0f);
		UltrasonicSensor ultrasonicSensor=new UltrasonicSensor(SensorPort.S1);
		int setPoint=30;
		pid.setSetpoint((float)setPoint);
		int b=0;
		while((b=ultrasonicSensor.getDistance())!=setPoint){
			LCD.clear();
			pid.process((int)System.currentTimeMillis(),(float)b);
			int speed=((int)pid.getValues())%900;
			Motor.A.setSpeed(Math.abs(speed));
			Motor.B.setSpeed(Math.abs(speed));
			if(speed<0){
				Motor.A.forward();
				Motor.B.forward();
			}
			else{
				Motor.A.backward();
				Motor.B.backward();
			}
			LCD.drawInt(b,0,0);
		}
		Motor.A.stop();
		Motor.B.stop();
		Motor.A.setSpeed(0);
		Motor.B.setSpeed(0);
		
	}
}