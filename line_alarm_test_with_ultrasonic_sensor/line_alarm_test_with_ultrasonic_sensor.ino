#include<UltraDistSensor.h>
#include <Wire.h>
#include <WiFi.h>
#include <LiquidCrystal_I2C.h>
#include <TridentTD_LineNotify.h>

#define SSID        "vivo"   //ใส่ชื่อ Wifi
#define PASSWORD    "SweetTim"   //ใส่รหัส Wifi
#define LINE_TOKEN  "sLfal79Y8bT0uRcVazpFEd3nKU9XKcJ9SgyU3hMsLDo"

#define ledR 2
#define ledY 4
#define ledG 23

LiquidCrystal_I2C lcd(0x27, 20, 4);

UltraDistSensor mysensor;
float reading;

void setup() {
  Serial.begin(115200);
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  
  Serial.println(LINE.getVersion());
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting ",  SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());
  LINE.setToken(LINE_TOKEN);

  lcd.init();
  lcd.backlight();
  mysensor.attach(32, 35);
}

void loop() {
  reading = mysensor.distanceInCm();
  lcd.setCursor(0, 0);
  lcd.print("Distance : ");
  lcd.print(reading);
  Serial.print("Distance : ");
  Serial.println(reading);
  LED();
  line();
  delay(250);
}

void LED() {
  if (reading >= 10 && reading <= 20) {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, LOW);
  } else if (reading >= 30 && reading <= 40) {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledG, LOW);
  } else if (reading >= 50 && reading <= 60) {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledG, HIGH);
  } else {
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, LOW);
  }
}
void line() {
  if ( reading < 20) {
    LINE.notify("Distance : " + String(reading) + " cm");
    delay(1000);
  }
}
