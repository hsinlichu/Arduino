int switchpin=3;
int ledpin=13;


void setup() {
  // put your setup code here, to run once:

pinMode(switchpin,OUTPUT);
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i;i<10;i++)
  {  
  digitalWrite(ledpin,HIGH);
  digitalWrite(switchpin,HIGH);
  delay(1000);  

  digitalWrite(ledpin,LOW);
  digitalWrite(switchpin,LOW);
  delay(1000);    
  }
}
