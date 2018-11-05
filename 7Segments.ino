#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8
#define segH 9
int count = 0;

void setup() {
  // put your setup code here, to run once:
for(int i=2;i<10;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:

switch(count)
{
  case 0:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,LOW);  
    break;
  }

  case 1:
  {
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,LOW); 
    break; 
  }

  case 2:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,LOW);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);  
    break;
  }


  case 3:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);  
    break;
  }

  case 4:
  {
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;  
  }

  case 5:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;  
  }

  case 6:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);  
    break;
  }

  case 7:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,LOW);
    digitalWrite(segF,LOW);
    digitalWrite(segG,LOW);
    break;  
  }

  case 8:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;  
  }

  case 9:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);  
    break;
  }

  case 10:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,LOW);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;  
  }

  case 11:
  {
    digitalWrite(segA,LOW);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    break;  
  }

  case 12:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,LOW);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,LOW);
    break;  
  }

  case 13:
  {
    digitalWrite(segA,LOW);
    digitalWrite(segB,HIGH);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,LOW);
    digitalWrite(segG,HIGH);  
    break;
  }

  case 14:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,LOW);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);  
    break;
  }

  case 15:
  {
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,LOW);
    digitalWrite(segD,LOW);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);  
    break;
  }

}

if(count < 16)
{
  count++;
  delay(1000);
}
else
{
  count = 0;
  delay(1000);
}

