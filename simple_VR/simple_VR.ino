/*www.kocoafab.cc*/

#include <Servo.h>
//모터 핀번호 선언. 방향을 제어할때 사용
int motor1 = 12; 
int motor2 = 13; 
//속도를 제어하는 핀번호 선언.
int speed1= 3; 
int speed2 = 11;
Servo myservo;

byte com = 0; //음성인식에 필요한 변수

void setup(){
  Serial.begin(9600); //시리얼 통신 설정  //모든 핀모드를 OUTPUT으로 설정
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  pinMode(speed1, OUTPUT);
  pinMode(speed2, OUTPUT);
    //compact모드 전환
  Serial.write(0xAA);
  Serial.write(0x37);
  delay(1000);
    //특정 그룹 사용준비
  Serial.write(0xAA);
  Serial.write(0x22);
  delay(1000);
    //서보모터의 핀번호 설정. 초기각도를 0도로 설정
  myservo.attach(4);
  myservo.write(0);
}

void loop(){
    com = Serial.read();
    //음성 인식을 통해 Switch문으로 여러 분기로 나눈다    //음성 인식의 종류에 따라 setMotor의 인자값이 바뀌게된다.
    switch (com)
    {
      case 0x2: //6인식
      Serial.println("one");
      setMotors(0,255, 0,61 );
      break;
      
      case 0x3: //7인식
      Serial.println("two");
      setMotors(255,255,200, 61);
      break;
      
      case 0x4: //8인식
      Serial.println("three");
       setMotors(0,255, 0, 35);
      break;
      
      case 0x5: //9인식
      Serial.println("four");
     setMotors(255,255, 200, 35);
      break;
     
    }

  }
  //모터의 움직이는 방향, 속도를 제어하는 함수//velo값은 속도를 나타내고, delay값을 통해 모터의 움직임을 제한한다.//delay가 클수록 모터는 많이 움직이게 되고, 짧을 수록 적은 거리를 이동하게 된다.
void setMotors(int velo1,int velo2, int delay1, int delay2) {
  //motor1 제어
  digitalWrite(motor1, LOW);
  analogWrite(speed1, velo1);
  delay(delay1);
  analogWrite(speed1, 0);

  delay(100);
  //motor2 제어
  digitalWrite(motor2, LOW);
  analogWrite(speed2, velo2);
  delay(delay2);
  analogWrite(speed2, 0);
  delay(500);
  turn();
  returnSet();
}

void returnSet()  //다시 제자리로 돌아가는 함수
{
  digitalWrite(motor1, HIGH);
  analogWrite(speed1, 255);
  digitalWrite(motor2, HIGH);
  analogWrite(speed2, 255);
  delay(1000);  
  analogWrite(speed1, 0);
  analogWrite(speed2, 0);
}

void turn() //서보모터를 움직여 서랍을 밀어내는 함수
{
  myservo.write(100); //서보모터의 각도를 100도로 지정
  delay(1000);
  myservo.write(0); //1초뒤 다시 0도로 지정
}
