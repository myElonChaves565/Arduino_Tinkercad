int led_green = 11;
int led_red = 13;
int led_yellow = 12;
void setup()
{
  pinMode(led_green, INPUT);
  pinMode(led_red, INPUT);
  pinMode(led_yellow, INPUT);
}

void loop()
{
  digitalWrite(led_green, HIGH);
  delay(1000);
  digitalWrite(led_red, HIGH);
  delay(1000); 
  digitalWrite(led_yellow, HIGH);
  delay(1000);
}