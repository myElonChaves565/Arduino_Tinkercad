int carroVermelho = 13;
int carroAmarelo = 12;
int carroVerde = 11;

int pedVerde = 2;
int pedVermelho = 3;
int botao = 7;

int tempoAtravessar = 5000;
unsigned long mudaTempo;

void setup()
  {
 
  mudaTempo = millis();
  
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  
  pinMode(pedVermelho, OUTPUT);
  pinMode(pedVerde, OUTPUT);
  
  pinMode(botao, INPUT);
  
  digitalWrite(carroVerde, HIGH);
  digitalWrite(pedVermelho, HIGH);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(pedVerde, LOW);
  Serial.begin(9600);
  
}

void loop(){
  
  int estado = digitalRead(botao);
  delay(50);
  Serial.println(estado);
  
  if(estado == HIGH && (millis() - mudaTempo) > 5000){
  
  mudaLuzes();
    
  }
}

void mudaLuzes()
  {
  
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  delay(4000);
  
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, HIGH);
  delay(tempoAtravessar);
  
  for(int x=0; x<10; x++){
  digitalWrite(pedVermelho, LOW);
  delay(160);
  digitalWrite(pedVerde, HIGH);
  delay(160);
    
  }
  
  digitalWrite(pedVerde, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedVermelho, HIGH);
  digitalWrite(carroVerde, HIGH);
  
  mudaTempo = millis();
  
}

  