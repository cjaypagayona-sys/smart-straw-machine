#include <Servo.h>

#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN 6

#define OPEN_DELAY 500    
#define LOOP_DELAY 500      

Servo drawerServo;

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  drawerServo.attach(SERVO_PIN);
  drawerServo.write(0);   
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance <= 15) {
    drawerServo.write(130);    
    delay(OPEN_DELAY);         
  } else {
    drawerServo.write(0);    
  }

  delay(LOOP_DELAY);
}

Program Explanation

The ultrasonic sensor measures the distance between the machine and a hand or object.
When the detected distance is 15 cm or below, the system automatically activates the servo motor.
The servo motor opens the dispensing mechanism to release a straw.
After a short delay, the servo motor returns to its original position and closes the mechanism again.
