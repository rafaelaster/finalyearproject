#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2       // Digital pin 2
#define DHTTYPE DHT22  // Sensor type

DHT DHT22Sensor(DHTPIN, DHTTYPE);  // Proper initialization

void setup(void) {
   Serial.begin(9600);
  // DHT22Sensor.begin();  
 
}                


void loop() {

  int value = analogRead(A1);
  delay(1000);

  Serial.println(value);
//   delay(2000);  // Required for sensor stability
  
//   float humidity = DHT22Sensor.readHumidity();
//   float temperature = DHT22Sensor.readTemperature();


//   Serial.print("Humidity = ");
//   Serial.print(humidity);
//   Serial.println("%");
//   Serial.print("Temperature = ");
//   Serial.print(temperature);
//   Serial.println("°C");  // Added degree symbol and line break

//   delay(100);
// }
}