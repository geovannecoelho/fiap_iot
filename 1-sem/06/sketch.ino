#include <Servo.h>

const int servoPin = 9;

Servo servo;
int pos;

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
  servo.write(180);
}

void loop() {
  Serial.println("Alimentando o pet.");
  delay(1000);

  for(pos = 180; pos >= 0; pos--){
    servo.write(pos);
    delay(15);
  }

  delay(300);

  for(pos = 0; pos < 180; pos++){
    servo.write(pos);
    delay(15);
  }

  delay(1000)
}
