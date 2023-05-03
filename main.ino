#include <Wire.h> 
#include <DHT.h> 
#include <LiquidCrystal_I2C.h> // khai báo thư viện lcd 

LiquidCrystal_I2C lcd(0x27, 16, 2); 

#define DHTPIN D5
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE); 

void setup () {    

  Serial.begin(9600); 
  dht.begin(); 
  lcd.init(); 
  // Bật đèn nền lcd . 
  lcd.backlight(); 
  lcd.setCursor(0,0);
  lcd.print("Dang do");
  lcd.setCursor(1,1);
  lcd.print("Please wait...");
  delay(3000);
  lcd.clear(); 
}   

void loop ()  {  
  float h = dht.readHumidity(); 
  float t = dht.readTemperature(); 
  if (isnan(t)){ 
    Serial.println("Failed to read from DHT sensor!"); 
    return; 
  }
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C \n");
  lcd.clear();   
  lcd.setCursor(0,1); 
  lcd.print("Temp:"); 
  lcd.setCursor(5,1); 
  lcd.print(t); 
  lcd.setCursor(11,1); 
  lcd.print("C"); 
  delay(3000);  

} 