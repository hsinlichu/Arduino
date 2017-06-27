int base=2;
int num=6;
int i=base;

void setup() {
  for(int i=base;i<base+num;i++)
  {
    pinMode(i,OUTPUT);
    
    
    }
}

//若在一開始就int i=base會造成i在預設角位時就變成8惹

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=base;i<base+num;i++)
  {
    digitalWrite(i,HIGH);
    delay(200);
  }
  for(int i=base;i<base+num;i++)
  {
    digitalWrite(i,LOW);
    delay(200);    
    }
   
}
