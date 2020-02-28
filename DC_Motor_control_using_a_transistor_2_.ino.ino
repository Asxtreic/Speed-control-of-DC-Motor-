int pin=5;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Enter the spped ");
int n=0;
while(Serial.available()==0);
n=Serial.parseInt();
if(n>=256){
  n=255;
    analogWrite(pin,n);
  }
else if(n>=0 && n<=256){
  analogWrite(pin,n);
}
}
