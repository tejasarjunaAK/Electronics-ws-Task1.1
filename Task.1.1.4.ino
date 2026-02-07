//Task1.1.4
int trig=6;
int echo =7;
void setup(){
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 Serial.begin(9600);}
void loop(){
 long duration=0;
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 duration=pulseIn(echo,HIGH,35000);
 if (duration == 0) {
    Serial.println("No object detected");
  } 
 else{
 int distance=duration*0.034/2;
 Serial.println(distance);}
}
