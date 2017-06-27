int inpingreen=5;
int inpinyellow=6;
int inpinred=7;
int inpinarray[3]={inpingreen,inpinyellow,inpinred};
int alert=12;

int greenled=8;
int yellowled=9;
int redled=10;
int ledarray[3]={greenled,yellowled,redled};
int val;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

pinMode(greenled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(inpingreen,INPUT);
pinMode(inpinyellow,INPUT);
pinMode(inpinred,INPUT);

pinMode(alert,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=2;i++){
    val=digitalRead(inpinarray[i]);
    if(val==LOW){
     digitalWrite(ledarray[i],LOW);
    }
    else{
      digitalWrite(ledarray[i],HIGH);
      Serial.print(inpinarray[i],"is the first");
      digitalWrite(alert,HIGH);
      delay(100);
      digitalWrite(alert,LOW);
      
    }   
  }
  }
