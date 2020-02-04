#include <SoftwareSerial.h>
#include <Servo.h>
//모터 핀번호 선언. 방향을 제어할때 사용
int motor1 = 12;
int motor2 = 13;
//속도를 제어하는 핀번호 선언.
int speed1 = 3;
int speed2 = 11;
int TX = 2;
int RX = 3;
SoftwareSerial BTSerial(TX, RX);
Servo myservo;

void setup() {
  Serial.begin(9600); //시리얼 통신 설정  //모든 핀모드를 OUTPUT으로 설정
  BTSerial.begin(9600); //시리얼 통신 설정  //모든 핀모드를 OUTPUT으로 설정
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  pinMode(speed1, OUTPUT);
  pinMode(speed2, OUTPUT);
  //서보모터의 핀번호 설정. 초기각도를 0도로 설정
  myservo.attach(4);
  myservo.write(0);
}

void loop() {
  if (BTSerial.available()) {
    switch (BTSerial.read())
    {
      case 'A':
        Serial.println("1");
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 120);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 0);
        myservo.write(100); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo.write(0); //1초뒤 다시 0도로 지정
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 255);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 255);
        delay(1000);
        analogWrite(speed1, 0);
        analogWrite(speed2, 0);

        break;


      case 'B':
        Serial.println("2");
        myservo.write(100); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo.write(0); //1초뒤 다시 0도로 지정
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 255);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 255);
        delay(1000);
        analogWrite(speed1, 0);
        analogWrite(speed2, 0);


        break;

      case 'C':
        Serial.println("3");
        digitalWrite(motor1, LOW);
        analogWrite(speed1, 0);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 120);
        myservo.write(100); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo.write(0); //1초뒤 다시 0도로 지정
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 255);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 255);
        delay(1000);
        analogWrite(speed1, 0);
        analogWrite(speed2, 0);

        break;

      case 'D':
        Serial.println("4");
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 120);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 120);
        myservo.write(100); //서보모터의 각도를 100도로 지정
        delay(1000);
        myservo.write(0); //1초뒤 다시 0도로 지정
        digitalWrite(motor1, HIGH);
        analogWrite(speed1, 255);
        digitalWrite(motor2, HIGH);
        analogWrite(speed2, 255);
        delay(1000);
        analogWrite(speed1, 0);
        analogWrite(speed2, 0);

        break;
    }
  }
}
