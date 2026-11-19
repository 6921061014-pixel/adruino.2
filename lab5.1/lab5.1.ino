int led[4] = { 17, 2, 15, 12 };

void setup() {
  Serial.begin(115200);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop() {
  digitalWrite(17, LOW); //ติด
  delay(10);
  digitalWrite(17, HIGH); //ติด
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(15, LOW);
  delay(10);
  digitalWrite(15, HIGH);
  delay(10);
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(12, HIGH);
  delay(10);
}