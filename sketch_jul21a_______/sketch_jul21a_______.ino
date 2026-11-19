#include <analogWrite.h>
#define IN1 23
#define IN2 22
#define ENA 21
#define IN3 19
#define IN4 18
#define ENB 5

void setup() {
 Serial.begin(9600);
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(ENA, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(ENB, OUTPUT);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(ENA, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 digitalWrite(ENB, LOW);

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 char ch1;
 ch1 = Serial.read();
 if(ch1 == 'w'){
 //analogWrite(ENA, 50 );
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 //analogWrite(ENB, 50 );
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 Serial.println ("motorl Forward");
 delay(3000);

 
 }else if(ch1 == 's'){
 //analogWrite(ENA, 50 );
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 //analogWrite(ENB, 50 );
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 Serial.println ("motorl Backward");
 delay(3000);

 }else if(ch1 == 'a'){
 //analogWrite(ENA, 50 );
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 //analogWrite(ENB, 50 );
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 Serial.println ("motorl Left");
 delay(3000);

 }else if(ch1 == 'd'){
 //analogWrite(ENA, 50 );
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 //analogWrite(ENB, 50 );
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 Serial.println ("motorl Right");
 delay(3000);

 }else{
 //analogWrite(ENA, 0 );
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 //analogWrite(ENB, 0 );
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);

 }
}
