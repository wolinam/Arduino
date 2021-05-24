#include <SoftwareSerial.h>
#include <Servo.h>
int TX = 2;
int RX = 3;
SoftwareSerial BTSerial(TX, RX);
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

void setup() {
  Serial.begin(9600); //시리얼 통신 설정  //모든 핀모드를 OUTPUT으로 설정
  BTSerial.begin(9600); //시리얼 통신 설정  //모든 핀모드를 OUTPUT으로 설정
  myservo1.attach(4);
  myservo1.write(0);
  myservo2.attach(5);
  myservo2.write(0);
  myservo3.attach(6);
  myservo3.write(0);
  myservo4.attach(7);
  myservo4.write(0);
}

void loop() {
  if (BTSerial.available()) {
    switch (BTSerial.read())
    {
      case 'A':
        Serial.println("4");
        myservo1.write(80); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo1.write(0); //1초뒤 다시 0도로 지정
        break;

      case 'B':
        Serial.println("5");
        myservo2.write(80); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo2.write(0); //1초뒤 다시 0도로 지정
        break;

      case 'C':
        Serial.println("6");
        myservo3.write(80); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo3.write(0); //1초뒤 다시 0도로 지정
        break;

      case 'D':
        Serial.println("7");
        myservo4.write(80); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo4.write(0); //1초뒤 다시 0도로 지정
        break;

    }
  }
}

