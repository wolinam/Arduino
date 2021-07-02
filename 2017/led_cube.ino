int layer1 = A0;
int layer2 = A1;
int layer3 = A2;
int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;
int D5 = 6;
int D6 = 7;
int D7 = 8;
int D8 = 9;
int D9 = 10;


void setup() {
  pinMode(D1, OUTPUT); pinMode(D2, OUTPUT); pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT); pinMode(D5, OUTPUT); pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT); pinMode(D8, OUTPUT); pinMode(D9, OUTPUT);
  pinMode(layer1, OUTPUT); pinMode(layer2, OUTPUT); pinMode(layer3, OUTPUT);
}

void loop() {

  for (int i = 0; i <= 2 ; i = i + 1) {
    digitalWrite(layer1, HIGH);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, LOW);
    delay(120);

    digitalWrite(layer1, LOW);
    digitalWrite(layer2, HIGH);
    digitalWrite(layer3, LOW);
    delay(120);

    digitalWrite(layer1, LOW);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, HIGH);
    delay(120);


    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, HIGH); digitalWrite(D2, HIGH); digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH); digitalWrite(D5, HIGH); digitalWrite(D6, HIGH);
    digitalWrite(D7, LOW); digitalWrite(D8, LOW); digitalWrite(D9, LOW);
    delay(120);

    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, HIGH); digitalWrite(D2, HIGH); digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW); digitalWrite(D5, LOW); digitalWrite(D6, LOW);
    digitalWrite(D7, HIGH); digitalWrite(D8, HIGH); digitalWrite(D9, HIGH);
    delay(120);

    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, LOW); digitalWrite(D2, LOW); digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH); digitalWrite(D5, HIGH); digitalWrite(D6, HIGH);
    digitalWrite(D7, HIGH); digitalWrite(D8, HIGH); digitalWrite(D9, HIGH);
    delay(120);

    digitalWrite(D4, LOW); digitalWrite(D5, LOW); digitalWrite(D6, LOW);
    digitalWrite(D7, LOW); digitalWrite(D8, LOW); digitalWrite(D9, LOW);
    delay(0);

    digitalWrite(layer1, HIGH);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, LOW);
    delay(120);

    digitalWrite(layer1, LOW);
    digitalWrite(layer2, HIGH);
    digitalWrite(layer3, LOW);
    delay(120);

    digitalWrite(layer1, LOW);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, HIGH);
    delay(120);

    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, LOW); digitalWrite(D2, LOW); digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH); digitalWrite(D5, HIGH); digitalWrite(D6, HIGH);
    digitalWrite(D7, HIGH); digitalWrite(D8, HIGH); digitalWrite(D9, HIGH);
    delay(120);

    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, HIGH); digitalWrite(D2, HIGH); digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW); digitalWrite(D5, LOW); digitalWrite(D6, LOW);
    digitalWrite(D7, HIGH); digitalWrite(D8, HIGH); digitalWrite(D9, HIGH);
    delay(120);

    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, HIGH); digitalWrite(D2, HIGH); digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH); digitalWrite(D5, HIGH); digitalWrite(D6, HIGH);
    digitalWrite(D7, LOW); digitalWrite(D8, LOW); digitalWrite(D9, LOW);
    delay(120);

    digitalWrite(D4, LOW); digitalWrite(D5, LOW); digitalWrite(D6, LOW);
    digitalWrite(D1, LOW); digitalWrite(D2, LOW); digitalWrite(D3, LOW);
    delay(0);

  }

  for (int i = 0; i <= 3 ; i = i + 1) {

    digitalWrite(layer1, LOW); digitalWrite(layer2, LOW); digitalWrite(layer3, LOW);
    delay(10);


    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, HIGH); digitalWrite(D2, LOW); digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW); digitalWrite(D5, LOW); digitalWrite(D6, LOW);
    digitalWrite(D7, HIGH); digitalWrite(D8, LOW); digitalWrite(D9, HIGH);
    delay(500);
    digitalWrite(layer1, HIGH); digitalWrite(layer2, HIGH); digitalWrite(layer3, HIGH);
    digitalWrite(D1, LOW); digitalWrite(D2, HIGH); digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH); digitalWrite(D5, HIGH); digitalWrite(D6, HIGH);
    digitalWrite(D7, LOW); digitalWrite(D8, HIGH); digitalWrite(D9, LOW);
    delay(500);

  }

  digitalWrite(layer1, HIGH); digitalWrite(layer2, LOW); digitalWrite(layer3, LOW);
  digitalWrite(D3, LOW);
  delay(200);
}





