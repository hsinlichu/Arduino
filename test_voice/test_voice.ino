int analoginput=0;
int buzzer=11;
int i=0;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(buzzer,OUTPUT);
}

void loop() {
  for(i;i<=1023;i++){
  analogWrite(buzzer,i);
  Serial.println(i);}
  if(i==1024){
  Serial.println("it's over");
  delay(10000);

  }
    }   
  
