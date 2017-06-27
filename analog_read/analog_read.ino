int analoginput=0;
int redled=2;
int val;
int valarray[2];

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(redled,OUTPUT);
}

void loop() {
  valarray[1]=analogRead(analoginput);
  delay(100);

  if (valarray[0]!= valarray[1]){
    Serial.print("the new valtage:");
    Serial.println(valarray[1]);
    digitalWrite(redled,HIGH);
    delay(500);
    digitalWrite(redled,LOW);
    valarray[0]= valarray[1];
  }
   else{
    Serial.println("the valtage remain the same.");
    delay(500);
   }
    
    
    }   
  
