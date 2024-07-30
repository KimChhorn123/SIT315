const int motionSensorPin = 2; // Pin for the HC-SR505 sensor
const int ledPin = 13;         // Built-in LED pin (or external LED connected to pin 13)

void setup() {
  Serial.begin(9600);         // Initialize the serial monitor
  pinMode(motionSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(motionSensorPin); // Read the motion sensor value

  Serial.print("Motion Sensor Value: "); // Print the sensor value to the Serial Monitor
  Serial.println(sensorValue);
  
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn the LED on if motion is detected
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off if no motion is detected
    Serial.println("LED OFF");
  }
  
  delay(500); // Add a small delay to avoid overwhelming the serial monitor
}
