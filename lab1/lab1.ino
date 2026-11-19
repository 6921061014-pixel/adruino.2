void setup() {
   Serial.begin(9600);   
   hello();
}

void loop() {
  Serial.println("Hello world"); 
  delay(1000);

}

void hello() {
  Serial.println("ohm");
  Serial.println("16");

}