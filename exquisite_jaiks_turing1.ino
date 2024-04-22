int led1 = 3;
int led2 = 2;
int potenciometro = A5;
int ValorPotenciometro;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(potenciometro, INPUT);
}

void loop()
{
   ValorPotenciometro = analogRead(potenciometro);
  
  digitalWrite(led1, HIGH);
  delay(ValorPotenciometro);
  digitalWrite(led1, LOW);
  delay(ValorPotenciometro);
  
  digitalWrite(led2, HIGH);
  delay(ValorPotenciometro);
  digitalWrite(led2, LOW);
  delay(ValorPotenciometro);
  
}
