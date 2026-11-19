#include <Ultrasonic.h>

Ultrasonic ultrasonic(4, 3);
const int trigPin1 = 17;
const int echoPin1 = 10;

const int trigPin2 = 16;
const int echoPin2 = 11;
float davomiylik1, davomiylik2, davomiylik3, sm1, sm2, sm3;

long duration;
int distance;


// motor pins (DIAG and CS pins not used in this example)
#define M1_PWM 5    // pwm pin motor
#define M1_INA 23    // control pin INA
#define M1_INB 22    // control pin INB

#define M2_PWM 6    // pwm pin motor
#define M2_INA 21    // control pin INA
#define M2_INB 19    // control pin INB

void setup() {
  pinMode(M1_PWM, OUTPUT);
  pinMode(M1_INA, OUTPUT);
  pinMode(M1_INB, OUTPUT);
  pinMode(M2_PWM, OUTPUT);
  pinMode(M2_INA, OUTPUT);
  pinMode(M2_INB, OUTPUT);
 
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

 
  Serial.begin(115200);
}


void FORWARD() {
digitalWrite(M1_INA, HIGH);
digitalWrite(M1_INB, LOW);
digitalWrite(M2_INA, HIGH);
digitalWrite(M2_INB, LOW);


}

void Stop() {
digitalWrite(M1_INA, LOW);
digitalWrite(M1_INB, LOW);
digitalWrite(M2_INA, LOW);
digitalWrite(M2_INB, LOW); 
}

void turnleft() {
  
}
void turnright() {
 
}
void BACKWARD() {
  
}
void loop() {
  plusUltra1();
  delayMicroseconds(5);
  plusUltra2();
  delayMicroseconds(5);
 

 
  
  if (sm1 > 1 && sm1 < 35) { //Agar 50 sm masofada biror raqib ko'rinsa
   Stop();
  }
  else if (sm2 > 1 && sm2 < 35) { //Agar 50 sm masofada biror raqib ko'rinsa
    Stop();
 }else{
  FORWARD();
  
 }
 
}

void plusUltra1() {
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  davomiylik1 = pulseIn(echoPin1, HIGH);

  sm1 = davomiylik1 / 58.2;
  Serial.print("UL1  =");
  Serial.println(sm1);
}
void plusUltra2() {
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  davomiylik2 = pulseIn(echoPin2, HIGH);

  sm2 = davomiylik2 / 58.2;
  Serial.print("UL2  =");
  Serial.println(sm2);
}
