const int bot1 = 12;
const int bot2 = 13;
const int bot3 = 14;

void setup()
{
 for(int x = 2; x<12 ; x++){
 	pinMode(x, OUTPUT);
 }
  
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
}

void loop()
{
  int var1 = digitalRead(bot1);
  int var2 = digitalRead(bot2);
  int var3 = digitalRead(bot3);
  
  if(var1){
    for(int x = 2; x<12 ; x++){
     digitalWrite(x,HIGH);
     delay(100);
    }
  }
  if(var2){
    for(int x = 2; x<12 ; x+=2){
     digitalWrite(x,HIGH);
     delay(100);
    }
  }
  if(var3){
    for(int x = 2; x<12 ; x++){
     digitalWrite(x,LOW);
     delay(100);
    }
  }
}