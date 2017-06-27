int analoginput=0;
int redled=11;
int i=0;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(redled,OUTPUT);
}

void loop() {
  while(true){
    i=analogRead(analoginput);
    Serial.println(i);
    analogWrite(redled,i/4); //analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  delay(10);
  }
    }   
  
