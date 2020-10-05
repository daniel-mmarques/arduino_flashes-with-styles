int azul = 8;
int vermelho = 9;
int verde = 10;
int amarelo = 11;
int piscaRapido = 50;
int meioSegundo = 500;
int umSegundo = 1000;

void setup() {

  pinMode(azul,OUTPUT);
  pinMode(vermelho,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);

}

void pisca() {

  delay(piscaRapido);
  
}

void piscaLed2(int x) {

  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  
}

void piscaLed(int x) {

  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  digitalWrite(x,LOW);
  pisca();
  digitalWrite(x,HIGH);
  pisca();
  
}

void estilo1() {

  digitalWrite(azul,HIGH);
  
  delay(umSegundo);
  
  digitalWrite(vermelho,HIGH);
  
  delay(umSegundo);
  
  digitalWrite(verde,HIGH);
  
  delay(umSegundo);
  
  digitalWrite(amarelo,HIGH);
  
  delay(umSegundo);
  
  digitalWrite(azul,LOW);
  
  delay(meioSegundo);
  
  digitalWrite(vermelho,LOW);
  
  delay(meioSegundo);
  
  digitalWrite(verde,LOW);
  
  delay(meioSegundo);
  
  digitalWrite(amarelo,LOW);
  
  delay(meioSegundo);

}

void estilo2() {

  digitalWrite(azul,HIGH);
  delay(umSegundo);
  digitalWrite(azul,LOW);
  
  digitalWrite(verde,HIGH);
  delay(umSegundo);
  digitalWrite(verde,LOW);
  
  digitalWrite(vermelho,HIGH);
  delay(umSegundo);
  digitalWrite(vermelho,LOW);
  
  digitalWrite(amarelo,HIGH);
  delay(umSegundo);
  digitalWrite(amarelo,LOW);

  digitalWrite(azul,HIGH);
  delay(meioSegundo);
  digitalWrite(azul,LOW);

  digitalWrite(vermelho,HIGH);
  delay(meioSegundo);
  digitalWrite(vermelho,LOW);

  digitalWrite(verde,HIGH);
  delay(meioSegundo);
  digitalWrite(verde,LOW);

  digitalWrite(amarelo,HIGH);
  delay(meioSegundo);
  digitalWrite(amarelo,LOW);

}

void estilo3() {

  digitalWrite(amarelo,HIGH);
  piscaLed(amarelo);
  digitalWrite(amarelo,LOW);
  delay(meioSegundo);
  
  digitalWrite(azul,HIGH);
  piscaLed(azul);
  digitalWrite(azul,LOW);
  delay(meioSegundo);
  
  digitalWrite(verde,HIGH);
  piscaLed(verde);
  digitalWrite(verde,LOW);
  delay(meioSegundo);
  
  digitalWrite(vermelho,HIGH);
  piscaLed(vermelho);
  digitalWrite(vermelho,LOW);
  delay(meioSegundo);

  digitalWrite(azul,HIGH);
  digitalWrite(vermelho,HIGH);
  digitalWrite(verde,HIGH);
  digitalWrite(amarelo,HIGH);
  delay(umSegundo);

  digitalWrite(amarelo,HIGH);
  piscaLed(amarelo);
  digitalWrite(amarelo,LOW);
  delay(meioSegundo);
  
  digitalWrite(azul,HIGH);
  piscaLed(azul);
  digitalWrite(azul,LOW);
  delay(meioSegundo);
  
  digitalWrite(verde,HIGH);
  piscaLed(verde);
  digitalWrite(verde,LOW);
  delay(meioSegundo);
  
  digitalWrite(vermelho,HIGH);
  piscaLed(vermelho);
  digitalWrite(vermelho,LOW);
  delay(umSegundo);

}

void loop() {

  estilo1();
  estilo2();
  estilo3();
  
}
