// C++ code
//
void setup()
{
  pinMode(2,INPUT);
    pinMode(3,OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    bool botao = digitalRead(2);
    digitalWrite(3,botao);
    delay(10);
    Serial.println(botao);
}
