int redlight=5;
int yellowlight=6;
int greenlight=7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redlight,OUTPUT);
pinMode(yellowlight,OUTPUT);
pinMode(greenlight,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redlight,HIGH);
  Serial.print("redlight,stop");
  delay(5000);
  digitalWrite(redlight,LOW);
  
  
  digitalWrite(greenlight,HIGH);
  Serial.print("greenlight,go");
  delay(5000);
  digitalWrite(greenlight,LOW);
  

  digitalWrite(yellowlight,HIGH);
  Serial.print("yellowlight,slow down");
  delay(3000);
  digitalWrite(yellowlight,LOW);
  

}
