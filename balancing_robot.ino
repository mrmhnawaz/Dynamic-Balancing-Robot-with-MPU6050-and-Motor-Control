///Teesny 4.0 and MPU6050 Acceleromter used

#include <Wire.h>
#include <MPU6050_tockn.h>

#define motor1Pin1 2   // Motor 1, Input 1
#define motor1Pin2 3   // Motor 1, Input 2
#define motor2Pin1 4   // Motor 2, Input 1
#define motor2Pin2 5   // Motor 2, Input 2
#define enablePin1 6   // Motor 1, Enable
#define enablePin2 7   // Motor 2, Enable

MPU6050 mpu6050(Wire);

void setup() {
  Serial.begin(9600);
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);

  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
}

void loop() {
  mpu6050.update();
  
  float xAccel = mpu6050.getAngleX();
  float yAccel = mpu6050.getAngleY();

  // Determine direction based on accelerometer readings for Motor 1
  if (xAccel > 0) {
    // Forward direction
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
  } else {
    // Reverse direction
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
  }

  // Map accelerometer reading to PWM value for motor speed control for Motor 1
  int motorSpeed1 = map(abs(xAccel), 0, 90, 0, 255);
  analogWrite(enablePin1, motorSpeed1);

  // Determine direction based on accelerometer readings for Motor 2
  if (yAccel > 0) {
    // Forward direction
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
  } else {
    
    // Reverse direction
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
  }

  // Map accelerometer reading to PWM value for motor speed control for Motor 2
  int motorSpeed2 = map(abs(yAccel), 0, 90, 0, 255);
  analogWrite(enablePin2, motorSpeed2);

  Serial.print("X Accel: "); Serial.print(xAccel);
  Serial.print(" | Y Accel: "); Serial.print(yAccel);
  Serial.print(" | Motor 1 Speed: "); Serial.print(motorSpeed1);
  Serial.print(" | Motor 2 Speed: "); Serial.println(motorSpeed2);

  delay(100);
}
