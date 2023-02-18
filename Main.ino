//https://github.com/Tiegertropfen119-0001/Arduino-Car-Key-Jammer
#define rf 2
void setup() {
  Serial.begin(9600);
  pinMode(rf, OUTPUT);
}

void loop() {
  long input = Serial.parseInt();
  while (Serial.available() == 0) {
  }
  if (Serial.available()) {

    Serial.print("Raw => ");
    Serial.println(input);
    if (input == 0) {
      long input = 0;
      Serial.println("1 / High Power Jammer | 2 / High freq puls | 3 / Low freq puls | 4 / Fake Data | 5 / Fake Data 2");
    }
  }

  if (input == 1) {
    long input = 0;
    Serial.println("High Power Jammer");
    while (true) {
      digitalWrite(rf, HIGH);
    }
  }
  if (input == 2) {
    long input = 0;
    Serial.println("High freq puls");
    while (true) {
      digitalWrite(rf, HIGH);
      delay(2);
      digitalWrite(rf, LOW);
      delay(6);
    }
  }
  if (input == 3) {
    long input = 0;
    Serial.println("Low freq puls");
    while (true) {
      digitalWrite(rf, HIGH);
      delay(8);
      digitalWrite(rf, LOW);
      delay(9);
    }
  }
  if (input == 4) {
    int power;
    long input = 0;
    Serial.println("Fake Data");
    while (true) {
    digitalWrite(rf, HIGH);
      delay(1);
      digitalWrite(rf, LOW);
      delay(2);
    }
  }
  if (input == 5) {
    int power;
    long input = 0;
    Serial.println("Fake Data 2");
    while (true) {
    digitalWrite(rf, HIGH);
      delay(9);
      digitalWrite(rf, LOW);
      delay(5);
    }
  }
}
