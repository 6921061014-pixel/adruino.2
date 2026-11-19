#include <Servo.h>

Servo EZ;
int LED1 = 12;
int A = 0; 
int value = 0;
int servo = A1;


void setup() {
  pinMode(servo, OUTPUT);
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);
  EZ.attach(1);
}

void loop() {
  value = analogRead(A);
  Serial.println(value);
  value = map(value, 0, 1023, 0, 250);
  digitalWrite(LED1, HIGH);
  delay(value);
  digitalWrite(LED1, LOW);
  delay(value);
  EZ.write(value);
  delay(15);
  }
