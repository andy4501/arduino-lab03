const byte ledpin = 13;
char val=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello,");
  Serial.print("\tLED pin is: ");
  Serial.print(ledpin);
  Serial.print("\nBYE!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    val = Serial.read();
    if(val=='1'){
      digitalWrite(ledpin,HIGH);
      Serial.print("LED on");
     }
     else if (val=='0'){
        digitalWrite(ledpin,LOW);
        Serial.print("LED off");
     }
  }
 }
