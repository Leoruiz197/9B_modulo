const int bot1 = 2;
const int bot2 = 3;
const int bot3 = 4;
const int bot4 = 5;
const int bot5 = 6;
const int bot6 = 7;
const int bot7 = 8;

void setup()
{
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot4, INPUT);
  pinMode(bot5, INPUT);
  pinMode(bot6, INPUT);
  pinMode(bot7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int var1 = digitalRead(bot1);
  int var2 = digitalRead(bot2);
  int var3 = digitalRead(bot3);
  int var4 = digitalRead(bot4);
  int var5 = digitalRead(bot5);
  int var6 = digitalRead(bot6);
  int var7 = digitalRead(bot7);
  
  if(var1){
    Serial.println("DO");
  }
  if(var2){
    Serial.println("RE");
  }
  if(var3){
    Serial.println("MI");
  }
  if(var4){
    Serial.println("FA");
  }
  if(var5){
    Serial.println("SOL");
  }
  if(var6){
    Serial.println("LA");
  }
  if(var7){
    Serial.println("SI");
  }
}