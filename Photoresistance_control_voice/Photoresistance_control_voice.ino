int analoginput=0;
int buzzer=11;
int i=0;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(buzzer,OUTPUT);
}

void loop() {
  while(true){
  i=analogRead(analoginput);
  Serial.println(i); 
  analogWrite(buzzer,i);
  delay(300);
  }
    }   
  
