#include <Arduino.h>

//#include <DHT.h>
//#include <DHT_U.h>

//#define DHTPIN 7         // DHT11 sensor data pin
  // DHT sensor type
int Pote =  A0;
#define ENA 6  // Enable pin for motor driver (PWM pin)
#define IN1 8  // Input pin 1 for motor driver
#define IN2 7  // Input pin 2 for motor driver

#define TEMPERATURE_THRESHOLD 29 
#define TEMPERATURE_THRESHOLD1 32 // Temperature threshold to adjust motor speed

//DHT dht(DHTPIN, DHTTYPE);


void setup() {
g
 // Wire.begin();
//  lcd.begin();  // Initialize the LCD
//  lcd.backlight();  // Turn on the backlight
//  lcd.setCursor(0, 0);
//  lcd.print("Temperature:");
}

void loop() {
  delay(2000); // Delay between readings (adjust as needed)

  //float temperature = dht.readTemperature(); // Read temperature in Celsius
 // if (isnan(temperature)) {
  //  Serial.println("Failed to read temperature from DHT sensor!");
  //  return;
  //}
  int pot = analogRead(Pote);
  int motors = map(pot , 0 , 1023 , 0 , 255);

    

    
    analogWrite(ENA,motors);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2, LOW);
    
  Serial.print("pot \n");
  Serial.print(pot);

  //Serial.print("motors \n");
  //Serial.print(motors);

//  digitalWrite(ENA, motors);
 // Serial.print("Temperature: ");
 // Serial.println(" °C");

   // lcd.setCursor(0, 1); // Set cursor to the second line
 // lcd.print("                "); // Clear the previous motor speed

  // Adjust motor speed based on temperature
 // if (temperature > TEMPERATURE_THRESHOLD1) {
    // Increase motor speed
   // digitalWrite(MOTOR_PIN_ENA, 75);    // Set the motor speed to maximum (255)
   // digitalWrite(MOTOR_PIN_IN1, HIGH);  // Set motor direction (forward)
   // digitalWrite(MOTOR_PIN_IN2, LOW);
  //  lcd.setCursor(0, 1);
  //  lcd.print("Motor Speed: Max");
  
  //else if (temperature > TEMPERATURE_THRESHOLD) {
    // Increase motor speed
    //digitalWrite(MOTOR_PIN_ENA, 100);    // Set the motor speed to a value (100)
    //digitalWrite(MOTOR_PIN_IN1, HIGH);  // Set motor direction (forward)
    //digitalWrite(MOTOR_PIN_IN2, LOW);
   // lcd.setCursor(0, 1);
   // lcd.print("Motor Speed: Med");
  //}
 // else {
    // Decrease motor speed
  //  digitalWrite(MOTOR_PIN_ENA, 45);    // Set the motor speed to a lower value (45)
  //  digitalWrite(MOTOR_PIN_IN1, HIGH);  // Set motor direction (forward)
  //  digitalWrite(MOTOR_PIN_IN2, LOW);
  //  lcd.setCursor(0, 1);
  //  lcd.print("Motor Speed: Low")
  

 // lcd.setCursor(12, 0); // Set cursor to the temperature position on the first line
 // lcd.print(temperature); // Print temperature
}
