int sw1 = 16;
int sw2 = 5;
int IN1 23
int IN2 22
int IN3 19
int IN4 18

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200)

  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int s1=digitalWrite(sw1);
 int s2=digitalWrite(sw2);


  if(sw1==LOW){  
   Serial.println("right");
 for(int i=0;i <=3; i++){
  digitalWrite (IN[i], HIGH);
  delay(200);
  digitalWrite (IN[i], LOW);
  delay(200);

}
}else{
  Serial.println("sw OFF");
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, HIGH);
  }

 if(sw2==)
  Serial.println("left");
 for(int i=3;i >=0; i--){
  digitalWrite (IN[i], HIGH);
  delay(200);
  digitalWrite (IN[i], LOW);
  delay(200);



}
}else{
  Serial.println("OFF");
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, HIGH);
  }
  
  delay(10); 
}
