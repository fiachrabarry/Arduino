int r;
int pi=3.14;
int area;
int Timedelay=750;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


} 

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print("a circle with a radius ");
Serial.print(r);
Serial.print(" has an area ");
Serial.println(area);  
delay(Timedelay);
r=r+1;

}
