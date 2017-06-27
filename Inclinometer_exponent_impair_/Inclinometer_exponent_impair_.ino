int analoginput=0;
int redled=11;



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(redled,OUTPUT);
}

void loop() {
  while(true){
  int i=analogRead(analoginput);
  Serial.println(i);
  

  if (i>512)
  { //analogRead values go from 0 to 1023, analogWrite values from 0 to 255
    
    digitalWrite(redled,HIGH);
  }
   else{
    digitalWrite(redled,LOW);
   }
    
  }
    }   
  
