int ML1=23;
int ML2=22;
int MR1=20;
int MR2=19;
int sensor1=36;
int sensor2=39;

void setup() {
  // put your setup code here, to run once:
pinMode(ML1,OUTPUT);
pinMode(ML2,OUTPUT);
pinMode(MR1,OUTPUT);
pinMode(MR2,OUTPUT);
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ML1,HIGH);
digitalWrite(ML2,LOW);
digitalWrite(MR1,HIGH);
digitalWrite(MR2,LOW);
}
void forward(){
  digitalWrite(ML1,HIGH);
digitalWrite(ML2,LOW);
digitalWrite(MR1,HIGH);
digitalWrite(MR2,LOW);

}
