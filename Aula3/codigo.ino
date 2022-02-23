const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

int valor1;
int valor2;
int valor3;

void loop()
{
 valor1 = digitalRead(botao1);
 valor2 = digitalRead(botao2);
 valor3 = digitalRead(botao3);
  
 if(valor1){
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
 }
 if(valor2){
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
 }
 if(valor3){
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
 }
}
