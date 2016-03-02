
InfraredDetection::InfraredDetection(int ilength,int[] iports){
	port=&iports;
	length=ilength;

}
bool InfraredDtection::getBall(){
	int	r;
	int min=0;
	int minVal=1023;
	for(int i=0;i<length-3;i++){
		r=analogRead(ports[i]);
		if(r<1020){
			return true;
		}
	}
	return false;
}
int InfraredDtection::getClosestDirection(){
	int min=0;
	int r;
	for(int i=0;i<length-3;i++){
		r=analogRead(ports)[i];
		if(r<1020)
		{
			if(r<minVal){
				minVa=r;
				min=i;
				if(min>=(length-3/2))
					min=i;
			}
		}
	}
	return min;
}

