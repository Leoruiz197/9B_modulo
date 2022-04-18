const int bot1 = 2;
const int bot2 = 3;
const int bot3 = 4;
const int bot4 = 5;
const int bot5 = 6;

void setup()
{
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot4, INPUT);
  pinMode(bot5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int var1 = digitalRead(bot1);
  int var2 = digitalRead(bot2);
  int var3 = digitalRead(bot3);
  int var4 = digitalRead(bot4);
  int var5 = digitalRead(bot5);
  
  if(var1){
    Serial.println("FRASE 1");
  }
  if(var2){
    Serial.println("FRASE 2");
  }
  if(var3){
    Serial.println("FRASE 3");
  }
  if(var4){
    Serial.println("FRASE 4");
  }
  if(var5){
    Serial.println("FRASE 5");
  }
}