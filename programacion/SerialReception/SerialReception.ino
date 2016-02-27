void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}
int* SerialRead(){
  int* result;
  String msg="";
  if(Serial.available()){
    while(Serial.available()){
      msg+=(char)Serial.read();
      delayMicroseconds(170);
    }
  
    char array[20];
    msg.toCharArray(array,20);
    int i=1;
    int lengthD=0;
    String value="";
    while(array[i]!=','){
      value+=array[i];
      i++;
    }
    i++;
    int theLength=value.toInt();
    int resultArray[theLength];
    for(int k=0;k<theLength;k++){
      value="";
      while(array[i]!=','&&array[i]!='e'){
        value+=array[i];
        i++;
      }
      i++;
      resultArray[k]=value.toInt();
    }
    result=resultArray;
    
  }
  return result;
}
void loop() {
  // put your main code here, to run repeatedly:
  int* thP=SerialRead();
  Serial.println(thP[0]);
  
}
