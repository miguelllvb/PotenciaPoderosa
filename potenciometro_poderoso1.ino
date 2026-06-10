// Declaração de variáveis
byte ledA = 2;
byte ledVd = 3;
byte ledVm = 4;
byte ledB = 5;
byte ledL = 6;
int potencia = A1;
int valor = 0;

// Inicializando as variáveis
void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledVd, OUTPUT);
  pinMode(ledVm, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledL, OUTPUT);  
  pinMode(potencia, INPUT);
  Serial.begin(9600);
}

// Lógica de funcionamento
void loop() {
    valor = analogRead(A0);
    Serial.println(valor);

    if (valor > 0 & valor < 210) {
        digitalWrite(ledA, 1);
      	digitalWrite(ledA, 0);
    	delay(750);
      
      	digitalWrite(ledVd, 0);
      	digitalWrite(ledVd, 0);
    	delay(750);
        digitalWrite(ledVd,1);              
 		digitalWrite(ledVd,0); 
      	delay(750);

      	digitalWrite(ledVm, 0);
      	digitalWrite(ledVm, 0);
    	delay(750);
      
      	digitalWrite(ledB, 0);
      	digitalWrite(ledB, 0);
    	delay(750);
      	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
      
      	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    }

    if (valor >=211 & valor < 420) {
        digitalWrite(ledA, 1);
      	digitalWrite(ledA, 0);
    	delay(750);
      
      	digitalWrite(ledVd, 1);
      	digitalWrite(ledVd, 0);
    	delay(750);
        digitalWrite(ledVd,1);              
 		digitalWrite(ledVd,0); 
      	delay(750);
      
      	digitalWrite(ledVm, 0);
      	digitalWrite(ledVm, 0);
    	delay(750);
      
      	digitalWrite(ledB, 0);
      	digitalWrite(ledB, 0);
    	delay(750);
      	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
      
      	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    }

    if (valor >=421 & valor < 630) {
       digitalWrite(ledA, 1);
      	digitalWrite(ledA, 0);
    	delay(750);
      
      	digitalWrite(ledVd, 1);
      	digitalWrite(ledVd, 0);
    	delay(750);
        digitalWrite(ledVd,1);              
 		digitalWrite(ledVd,0); 
      	delay(750);
      
      	digitalWrite(ledVm, 1);
      	digitalWrite(ledVm, 0);
    	delay(750);
      
      	digitalWrite(ledB, 0);
      	digitalWrite(ledB, 0);
    	delay(750);
      	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
      
        digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    }
  
  if (valor >= 631 & valor < 840) { 
     	digitalWrite(ledA, 1);
      	digitalWrite(ledA, 0);
    	delay(750);
    
      	digitalWrite(ledVd, 1);
      	digitalWrite(ledVd, 0);
    	delay(750);
        digitalWrite(ledVd,1);              
 		digitalWrite(ledVd,0); 
    	delay(750);
    
      	digitalWrite(ledVm, 1);
      	digitalWrite(ledVm, 0);
    	delay(750);
    
      	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
    	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
    
      	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
  }
  
  if (valor >= 841 & valor < 1023) {
     	digitalWrite(ledA, 1);
      	digitalWrite(ledA, 0);
    	delay(750);
    
      	digitalWrite(ledVd, 1);
      	digitalWrite(ledVd, 0);
    	delay(750);
        digitalWrite(ledVd,1);              
 		digitalWrite(ledVd,0); 
    	delay(750);
    
      	digitalWrite(ledVm, 1);
      	digitalWrite(ledVm, 0);
    	delay(750);
    
      	digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
   		digitalWrite(ledB, 1);
      	digitalWrite(ledB, 0);
    	delay(750);
    
      	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
    	digitalWrite(ledL, 1);
      	digitalWrite(ledL, 0);
    	delay(750);
  }
}
  
