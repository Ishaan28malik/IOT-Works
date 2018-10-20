#include <AFMotor.h>
AF_DCMotor front_motor(1, MOTOR12_8KHZ);
AF_DCMotor aft_motor(2, MOTOR12_8KHZ);
AF_DCMotor motor3(3, MOTOR12_8KHZ);
AF_DCMotor motor4(4, MOTOR12_8KHZ);
String readString;

 int led_f=2;
 int led_b=4;

void setup() {
  Serial.begin(9600);
  front_motor.setSpeed(250);
  aft_motor.setSpeed(250);
  motor3.setSpeed(250);
  motor4.setSpeed(250);
  pinMode(led_f,OUTPUT);
  pinMode(led_b,OUTPUT);
}

void loop() {
  while(Serial.available()){
    delay(50);
    char c=Serial.read();
    readString+=c;
  }
  if(readString.length()>0){
    Serial.println(readString);
    if (readString =="FORWARD"){
      aft_motor.run (FORWARD);
      front_motor.run (FORWARD);
      motor4.run(FORWARD);
      motor3.run(FORWARD);
      digitalWrite(led_f,HIGH);
      digitalWrite(led_b,LOW);
      delay(500);
    }
    if (readString =="BACKWARD"){
      aft_motor.run (BACKWARD);
      front_motor.run (BACKWARD);
      motor4.run(BACKWARD);
      motor3.run(BACKWARD);
      digitalWrite(led_b,HIGH);
      digitalWrite(led_f,LOW);
      delay(500);
    }
    if (readString =="RIGHT"){
      front_motor.run (RELEASE);
      aft_motor.run (RELEASE);
      motor3.run(FORWARD);
      motor4.run(FORWARD);
      digitalWrite(led_f,HIGH);
      digitalWrite(led_b,LOW);
      delay(500);
    }
    
    if (readString =="LEFT"){
      front_motor.run(FORWARD);
      aft_motor.run (FORWARD);
      motor3.run(RELEASE);
      motor4.run(RELEASE);
      digitalWrite(led_f,HIGH);
      digitalWrite(led_b,LOW);
      delay(500);
    }
    if (readString =="STOP"){
      front_motor.run (RELEASE);
      aft_motor.run (RELEASE);
      motor3.run(RELEASE);
      motor4.run(RELEASE);
digitalWrite(led_f,LOW);
      digitalWrite(led_b,HIGH);
      delay(500);
    }

readString="";
  }
}
