#define IN1 23
#define IN2 22
#define IN3 19
#define IN4 18

void setup() {

 Serial.begin(9600);
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
}
void loop() {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  delay(500);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN1, LOW);
  delay(500);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN2, LOW);
  delay(500);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN3, LOW);
  delay(500);
  digitalWrite (IN4, HIGH);
  digitalWrite (IN4, LOW);
  delay(500);

}
