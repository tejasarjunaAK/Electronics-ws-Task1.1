//Task1.1.1
void setup(){
 Serial.begin(9600);
}
void loop(){
 int val=digitalRead(A1);
 Serial.println(val);
 delay(100);}

//Explanation:
 // White surfaces reflect most ir radiation falling on them so the receiver will be ablee too detect ir rays reflected from white surface at smaller distance than from black surface.
