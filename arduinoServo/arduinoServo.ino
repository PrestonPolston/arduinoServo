#include <Servo.h>
int servoPin = 9;
int potPin = A0;
int potVal;
float voltToAngle;
int servoControl = 9;
int servoAngle;
int br =115200;
int delayTime = 25;
String prompt = "Rotate the potentiometer to move the servo. ";
String potPosition = "Potentiometer position is: ";
String servoPosition = "Servo position is: "
Servo myServo;

void setup() {
pinMode(potPin, INPUT);
pinMode(servoControl, OUTPUT)
Serial.begin(br);
myServo.attach(servoPin);

}

void loop() {


}
