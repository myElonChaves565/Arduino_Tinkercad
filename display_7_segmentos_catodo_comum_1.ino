//CIMA//
int red = 10;
int orange = 9;
int yellow = 7;
int green = 6;
//BAIXO//
int azul1 = 5;
int azul = 4;
int rosa = 3;
int roxo = 2;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}