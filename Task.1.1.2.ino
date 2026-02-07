//Task.1.1.2
void setup(){
 Serial.begin(9600);
 pinMode(2,INPUT);
}
void loop(){
 
 int val=digitalRead(2);
 Serial.println(val);
 delay(100);}

//I used the digital output of the ldr sensor by getting digital output of sensor.
//Explanation for ldr following inverse square law:
// Intensity is inversely proportional to distance. In ldr the resistance is inversely proportional to intensity. Brighter light ->low resistance.The voltage across fixed resistance is converted to pwm value.
