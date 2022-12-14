// created by Refael Ivgi
#include <msp430.h>

void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorValue= analogRead(A3);
  Serial.println(sensorValue);
  if(sensorValue > 100){
    sendsms();
  }

}
void sendsms(){

Serial.println("AT\r");
delay(1000);

Serial.println("AT+CMGF = 1 \r");
delay(1000);

Serial.println("AT+CMGF = \"+972XXXXXX\"\r");
delay(1000);

Serial.println("Alert From SmartBuster");
delay(1000);

Serial.println((char)26);
delay(1000);
}
