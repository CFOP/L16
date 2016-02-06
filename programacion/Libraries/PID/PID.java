public class PID{
	private float kp;
	private float ki;
	private float kd;
	private float setPoint;
	private float previousValue;
	
	private float currentValue;
	
	private int previousTime;
	private int currentTime;
	
	private float integral;
	private float proportional;
	private float derivative;
	public PID(float kp,float ki,float kd,float setPoint) {
		this.kp=kp;
		this.ki=ki;
		this.kd=kd;
		
		this.previousValue=0;
		this.currentValue=-1;
		

		this.previousTime=0;
		this.currentTime=-1;

		this.integral=0;
		
		this.setPoint=setPoint;
	}
	public void setSetpoint(float setPoint){
		this.setPoint=setPoint;
		integral=0;
	}
	public void process(int currentTime,float currentValue){
		if(this.currentTime==-1){
			this.currentTime=currentTime;
		}
		else{
			this.previousTime=this.currentTime;
			this.currentTime=currentTime;
		}
		if(this.currentValue==-1){
			this.currentValue=currentTime;
		}
		else{
			this.previousValue=this.currentValue;
			this.currentValue=currentValue;
		}
		proportional=kp*(setPoint-currentValue);
		integral+=(1.0f/(setPoint-currentValue));
		derivative=kd*(currentValue-previousValue)/(currentTime-previousTime);
	}

	public float getValues(){
		return (proportional+(integral*ki)+derivative);
	}
}