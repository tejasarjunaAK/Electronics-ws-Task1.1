//Task1.1.3
int irPin =3;
void setup(){
 pinMode(irPin,INPUT);
 Serial.begin(9600);}
void loop(){
 int motion =digitalRead(irPin);
 if  (motion==HIGH){
    Serial.println("detected motion");
    }
 else { 
    Serial.println("no motion");
   }
 delay(100);}
 
//LATENCY TIME FOR PIR SENSOR WAS 9SECONDS. Only after 9 seconds it recognised and changed
