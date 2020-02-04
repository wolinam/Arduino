#include <LiquidCrystal.h>

#define Button 9     //버튼과 연결된 9번 핀 
#define EchoPin 8    //초음파 센서 Echo 핀과 연결된 8번 핀
#define TrigPin 7    //초음파 센서 Trig 핀과 연결된 7번 핀

int oneTimeFlag;
LiquidCrystal lcd(12,11,5,4,3,2);    //RS 핀, E핀, 데이터 핀 4개
String lcdString = "stop";           //맨 처음 stop이라는 글자 출력
float duration, distance;            

void setup() {
 pinMode(Button, OUTPUT);
 digitalWrite(Button, HIGH);
 lcd.begin(16, 2);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("stop");
 
 pinMode(Button, INPUT); 
 pinMode(TrigPin, OUTPUT);
 pinMode(EchoPin, INPUT);
 Serial.begin(9600);
}

void loop() {
  if(digitalRead(Button) == LOW) {      //버튼이 눌리지 않았을 경우
     
     if(oneTimeFlag==0){                //방금 전에 버튼이 눌렸다면
        oneTimeFlag = 1;                //버튼 바로 누름 전 상태 표시
        
        if(lcdString.equals("stop")) {  //LCD에 stop이라고 출력되어 있으면
          lcd.clear();     
          lcd.setCursor(0,0);           //커서 0,0에 세팅
          lcd.print("----------------");
          delay(5000);                  
          
          lcd.clear();
          lcd.setCursor(0,0);        
          measure();                    //키 측정 함수 호출
        } else { 
          lcd.clear();
          lcd.setCursor(0,0);           //키 측정 하지않을 경우(방금 전 버튼을 누르지 않았을 떄)
          lcdString = "stop";           //stop 출력
          lcd.print(lcdString);
        }
     } 
   }else {  
      oneTimeFlag = 0;
  }
}

//키 측정 함수
void measure() {
 //초음파 보내기
 digitalWrite(TrigPin, HIGH);
 delay(10);
 digitalWrite(TrigPin, LOW);           

 duration = pulseIn(EchoPin, HIGH);   //echo 핀이 HIGH한 시간 확인
 distance = ((float)(340 * duration) / 10000) / 2;  // HIGH 였을 때 시간(초음파가 보냈다가 다시 들어온 시간)을 가지고 거리를 계산
 
 Serial.println(distance);
 distance = 200.0 - distance;          //센서에 위치로 부터 반대로 빼기
 Serial.println(distance);
 
 char changeString[3];                    
 dtostrf(distance, 3, 2, changeString);   //float -> char
 lcdString = (String)changeString;        //char -> string
 lcdString += "cm";
 lcd.print(lcdString);                    //키 출력
}
