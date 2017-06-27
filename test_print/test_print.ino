int i=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(i<10){
Serial.print("Hello world.");
i++;}
else{
  Serial.print("james");
}

}
