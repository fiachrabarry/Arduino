float V2;
int readVal;
int delayT=1000;
int ReadPin=A2;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(ReadPin);
  V2=(5./1023.)*readVal;
Serial.println(V2);
delay(delayT);

}
