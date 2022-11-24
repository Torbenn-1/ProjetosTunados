
void setup(){
  // Configura os pinos dos LEDs como saída
  pinMode(11, OUTPUT); // LED verde
  pinMode(12, OUTPUT); // LED amarelo
  pinMode(13, OUTPUT); // LED vermelho
  pinMode(10, OUTPUT); // LED verde pedestre
  pinMode(9, OUTPUT); // LED vermelho pedestre
}

void loop(){
  // Sinal aberto: Verde e vermelho pedrestre ascendem 
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);

  delay(3000);
  
  // Sinal reduza: Amarelo e vermelho pedestre ficam acesos
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  
  delay(2000);
  
  // Sinal fechado: Vermelho e verde pedestre ascendem 
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);

  delay(5000);
}
