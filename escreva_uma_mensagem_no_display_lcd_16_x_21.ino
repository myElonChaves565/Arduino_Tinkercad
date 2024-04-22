//Escrever uma mensagem no display LCD 16
#include <LiquidCrystal.h> // Inclusão da biblioteca
LiquidCrystal lcd (12, 11, 10,5, 4, 3, 2);

int backLight = 13; //Pino 13 responável pelo controle do LED

void setup(){
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH);
  // Lia backlight. Substituir 'HIGH' por 'LOW' para desligar 
  
  lcd.begin(16, 2);//Colunas, linhas. Use 16,2 para display LCD
  lcd.clear();// Inicializa o display com uma tela vazia
  lcd.setCursor(0, 0);//Posiciona o cursor na coluna 0, linha 0
  lcd.print("Testando LCD");//Escreve o texto desejado
  
  lcd.setCursor(0, 1);//Posiciona o cursor para a coluna 0,linha
  lcd.print("INFOR 2");
  Serial.begin(9600);//Inicializa a comunicação serial em 9600
}
void loop(){
  delay(1000);
  lcd.noDisplay();//Desliga Display:
  delay(500);
  lcd.display();//Liga Display:
  delay(500);
  lcd.display();//Liga Display:
}

