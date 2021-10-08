int pinr=9;
int ping=13;
int piny=11;
void setup() {
  // put your setup code here, to run once:
pinMode(pinr,OUTPUT);
pinMode(ping,OUTPUT);
pinMode(piny,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinr,HIGH);
delay(1000);
digitalWrite(piny,LOW);
delay(1000);
digitalWrite(ping,LOW);
delay(1000);

digitalWrite(pinr,LOW);
delay(1000);
digitalWrite(piny,HIGH);
delay(1000);
digitalWrite(ping,LOW);
delay(1000);

digitalWrite(pinr,LOW);
delay(1000);
digitalWrite(piny,LOW);
delay(1000);
digitalWrite(ping,HIGH);
delay(1000);

}
