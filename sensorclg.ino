#include<SoftwareSerial.h>
int sensorPin =A0;
int sensorValue=0;
int led=3;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Welcome to Blue Banyan");
sensorValue=analogRead(sensorValue);
Serial.println(sensorValue);
delay(500);
if (sensorValue<500)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}
}
