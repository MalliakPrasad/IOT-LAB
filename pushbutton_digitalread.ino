const int buttonpin=2;
const int ledpin=13;

int buttonState=0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(buttonpin);
if(buttonState==HIGH){
  digitalWrite(ledpin,HIGH);
}else{
  digitalWrite(ledpin,LOW);
}
}
