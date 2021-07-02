int layer1 = A0;
int layer2 = A1;
int layer3 = A2;
int D2 = 2;
int D3 = 3;
int D4 = 4;
int D5 = 5;
int D6 = 6;
int D7 = 7;
int D8 = 8;
int D9 = 9;
int D10 = 10;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(D2, OUTPUT); pinMode(D3, OUTPUT); pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT); pinMode(D6, OUTPUT); pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT); pinMode(D9, OUTPUT); pinMode(D10, OUTPUT);  
  pinMode(layer1, OUTPUT); pinMode(layer2, OUTPUT); pinMode(layer3, OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(layer1, HIGH); digitalWrite(layer2, LOW); digitalWrite(layer3, LOW); 
  digitalWrite(D6, HIGH);
  delay(500);
  digitalWrite(layer1, LOW); digitalWrite(layer2, HIGH); digitalWrite(layer3, LOW); 
  digitalWrite(D6, HIGH);
  delay(500);
  digitalWrite(layer1, LOW); digitalWrite(layer2, LOW); digitalWrite(layer3, HIGH); 
  digitalWrite(D6, HIGH);
  delay(500);
  digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH); 
  digitalWrite(D6, HIGH);
  delay(500);
  digitalWrite(layer1, LOW); digitalWrite(layer2, LOW); digitalWrite(layer3, LOW); 
  delay(500);
}
