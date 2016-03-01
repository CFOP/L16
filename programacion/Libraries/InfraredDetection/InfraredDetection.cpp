
InfraredDetection::InfraredDetection(int ilength,int[] iports){
	port=&iports;
	length=ilength;

}
bool InfraredDtection::getBall(){
	int	r;
	for(int i=0;i<length-3;i++){
		r=analogRead(ports[i]);
		if(r<1020){
			return true;
		}
	}
	return false;
}
