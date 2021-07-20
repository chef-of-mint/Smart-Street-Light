int ir1=2;
int ir2=3;
int ir3=4;
int ir4=5;

int led1=6;
int led2=7;
int led3=8;
int led4=9;
int led5=10;
int led6=11;
int i1=0,i2=0,i3=0,i4=0;
long d1=0,d2=0,d3=0,d4=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  i1=digitalRead(ir1);
  i2=digitalRead(ir2);
  i3=digitalRead(ir3);
  i4=digitalRead(ir4);

  if(i1==LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    d1=15000;
  }
  else if(d1!=0){
    d1--;
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }

  if(i2==LOW){
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    d2=15000;
  }
  else if(d2!=0){
    d2--;
  }
  else{
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }

  if(i3==LOW){
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    d3=15000;
  }
  else if(d3!=0){
    d3--;
  }
  else{
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }

  if(i4==LOW){
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    d4=15000;
  }
  else if(d4!=0){
    d4--;
  }
  else{
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  
}
