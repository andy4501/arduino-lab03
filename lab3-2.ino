const byte ledpin = A0;
int val,i;
float sensorVoltage;
float sensorValue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 {
    val = analogRead(ledpin);
    Serial.println(val);
    for(i=0;i<=5;i++)
    {
      sensorValue = 0.7* sensorValue + 0.3* analogRead(A0);
      sensorVoltage = sensorValue * 2.5 / 4095; 
    }
    Serial.println(sensorVoltage);
    delay(500);

  
 }
}
