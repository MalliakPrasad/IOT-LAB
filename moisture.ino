int Dpin0=5;
int Apin0=1;
int Apinval;

void setup(){
  pinMode(Dpin0,INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.print("D0 Value:");
  Serial.println(digitalRead(Dpin0));
  Serial.print("A0 Value:");
  Apinval=analogRead(Apinval);
  delay(5000);
}
