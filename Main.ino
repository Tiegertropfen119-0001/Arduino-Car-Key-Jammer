//https://github.com/Tiegertropfen119-0001/Arduino-Car-Key-Jammer
// Define pin number for radio frequency output
#define rf 2

void setup() {
  // Initialize serial communication with 9600 baud rate
  Serial.begin(9600);
  // Set pin mode for radio frequency output as output
  pinMode(rf, OUTPUT);
}

void loop() {
  // Read integer input from serial port
  long input = Serial.parseInt();
  
  // Wait until there is data available in the serial buffer
  while (Serial.available() == 0) {
  }
  
  // If there is data available in the serial buffer
  if (Serial.available()) {
    // Print raw input value to serial monitor
    Serial.print("Raw => ");
    Serial.println(input);
    
    // If input is 0, prompt user to choose an option
    if (input == 0) {
      long input = 0;
      Serial.println("1 / High Power Jammer | 2 / High freq puls | 3 / Low freq puls | 4 / Fake Data | 5 / Fake Data 2");
    }
  }

  // If input is 1, activate high power jammer mode
  if (input == 1) {
    long input = 0; // reset input variable to 0
    Serial.println("High Power Jammer");
    while (true) { // continuously transmit radio frequency signal
      digitalWrite(rf, HIGH);
    }
  }
  
  // If input is 2, activate high frequency pulse mode
  if (input == 2) {
    long input = 0; // reset input variable to 0
    Serial.println("High freq puls");
    while (true) { // continuously transmit radio frequency signal with pulse pattern
      digitalWrite(rf, HIGH);
      delay(2);
      digitalWrite(rf, LOW);
      delay(6);
    }
  }
  
  // If input is 3, activate low frequency pulse mode
  if (input == 3) {
    long input = 0; // reset input variable to 0
    Serial.println("Low freq puls");
    while (true) { // continuously transmit radio frequency signal with pulse pattern
      digitalWrite(rf, HIGH);
      delay(8);
      digitalWrite(rf, LOW);
      delay(9);
    }
  }
  
  // If input is 4, activate fake data mode with shorter delay
  if (input == 4) {
    int power; // declare power variable that is not used
    long input = 0; // reset input variable to 0
    Serial.println("Fake Data");
    while (true) { // continuously transmit radio frequency signal with pulse pattern
      digitalWrite(rf, HIGH);
      delay(1);
      digitalWrite(rf, LOW);
      delay(2);
    }
  }
  
  // If input is 5, activate fake data mode with longer delay
  if (input == 5) {
    long input = 0; // reset input variable to 0
    Serial.println("Fake Data 2");
    while (true) { // continuously transmit radio frequency signal with pulse pattern
      digitalWrite(rf, HIGH);
      delay(9);
      digitalWrite(rf, LOW);
      delay(5);
    }
  }
}
