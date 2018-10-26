int green1=4;
int green2=5;
int green3=6;
int green4=7;
int w=100;
void setup()
{
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(green3,OUTPUT);
  pinMode(green4,OUTPUT);
}

void loop() 
{

digitalWrite(green1,HIGH);
delay(w);
digitalWrite(green1,LOW);
delay(w);
digitalWrite(green2,HIGH);
delay(w);
digitalWrite(green2,LOW);
delay(w);
digitalWrite(green3,HIGH);
delay(w);
digitalWrite(green3,LOW);
delay(w);
digitalWrite(green4,HIGH);
delay(w);
digitalWrite(green4,LOW);
delay(w);

digitalWrite(green3,HIGH);
delay(w);
digitalWrite(green3,LOW);
delay(w);
digitalWrite(green2,HIGH);
delay(w);
digitalWrite(green2,LOW);
delay(w);

}
