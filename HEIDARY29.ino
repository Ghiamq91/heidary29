int ledpin=13;
void setup() {
 Serial.begin(9600);
pinMode(ledpin,OUTPUT);
}

void loop() {
  int sensorvalue=analogRead(A0);
  float voltage=sensorvalue*(5.0/1023.0);
  Serial.println(voltage);
  if(voltage<3 ){
  digitalWrite( ledpin,HIGH);}
  else{
    digitalWrite(ledpin,LOW);
  }

}
