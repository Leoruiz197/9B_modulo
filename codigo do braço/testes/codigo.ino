#include <Servo.h>

Servo s1,s2,s3,s4,s5;

const int botao1 = 2;
const int botao2 = 3;
const int pot1 = A0;
const int pot2 = A1;
const int pot3 = A2;
const int pot4 = A3;
const int pot5 = A4;

void setup()
{
//pinMode(led1, OUTPUT);
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
  Serial.begin(9600);
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
}

int var1, var2, var3, var4, var5, var6, var7;

void loop()
{
 var1 = analogRead(pot1);
 var2 = analogRead(pot2);
 var3 = analogRead(pot3);
 var4 = analogRead(pot4);
 var5 = analogRead(pot5);
 var6 = digitalRead(botao1);
 var7 = digitalRead(botao2); 
  
s1.write(map(var1,0,1023,0,180));
s2.write(map(var2,0,1023,0,180));
s3.write(map(var3,0,1023,0,180));
s4.write(map(var4,0,1023,0,180));
s5.write(map(var5,0,1023,0,180));  

  Serial.print(var1);
  Serial.print(" ");
  Serial.print(var2);
  Serial.print(" ");
  Serial.print(var3);
  Serial.print(" ");
  Serial.print(var4);
  Serial.print(" ");
  Serial.print(var5);
  Serial.print(" ");
  Serial.print(var6);
  Serial.print(" ");
  Serial.println(var7);
  Serial.println(" ");

}
