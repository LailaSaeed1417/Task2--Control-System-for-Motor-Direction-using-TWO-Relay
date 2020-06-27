const int Relay1Pin =  4;
const int Relay2Pin =  5;
int Relay1State = LOW;
int Relay2State = HIGH;

void setup() {
  // put your setup code here, to run once:
  
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Relay1State == HIGH)
  {
    Relay1State = LOW;  
  }
  else if (Relay2State == LOW)
  {
    Relay2State = HIGH;
  }
  digitalWrite(4, Relay1State);
  delay(5000);
  digitalWrite(5, Relay2State);
  delay(5000);
}
