float V2;
int redPin=8;
int yellowPin=9;
int greenPin=10;
float readVal;
int dt=750;
int myPin=A3;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
V2=(5.0/1023.0)*readVal;
readVal=analogRead(myPin);
Serial.print("The poteniometer reading = ");
Serial.println(V2);


if (V2>=2.0 && V2<3.0) {
  digitalWrite(redPin,HIGH);
    }
    if (V2<2.0 || V2>3.0){
    digitalWrite(redPin,LOW);
    }
if (V2>=3.0 && V2<4.0) {
digitalWrite(yellowPin,HIGH);
} 
if (V2<3.0 || V2>4.0) {
  digitalWrite(yellowPin, LOW);
}
if (V2>4.0 && V2<5.0) {
  digitalWrite(greenPin,HIGH);
}
if (V2<4.0 || V2>5.0) {
  digitalWrite(greenPin,LOW);
}
delay(dt);
}
