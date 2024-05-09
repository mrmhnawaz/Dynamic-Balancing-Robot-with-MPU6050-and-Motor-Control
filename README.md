

Dynamic Balancing Robot with MPU6050 and Motor Control using Teensy 4.0

Welcome to the Dynamic Balancing Robot project! This project aims to create a self-balancing robot using the powerful Teensy 4.0 microcontroller from NXP, 
along with the MPU6050 accelerometer and gyroscope sensor and motor control. With this project, 
you'll dive into the exciting world of robotics and explore concepts such as dynamic balancing, PID control, and real-time sensor data processing.

Features
Utilizes the high-performance Teensy 4.0 microcontroller for fast and precise control.
Implements PID control algorithm to maintain balance and stability.
Dynamically adjusts motor speeds to counteract any deviations from the desired orientation.
Real-time monitoring of sensor data and motor speeds via serial communication.
Easily customizable parameters for fine-tuning the balancing behavior.

Hardware Components
Teensy 4.0 microcontroller board (powerful ARM Cortex-M7 processor)
MPU6050 accelerometer and gyroscope sensor module
Motor driver module (for controlling DC motors)
DC motors (two-wheel drive configuration)
Chassis, wheels, and other mechanical components for the robot assembly

Software Requirements
Arduino IDE for programming the Teensy 4.0 microcontroller
MPU6050_tockn library for interfacing with the MPU6050 sensor
Standard Wire library for I2C communication
PID library for implementing the PID control algorithm

Setup and Usage
Wiring: Connect the MPU6050 sensor and motor driver module to the Teensy 4.0 microcontroller as per the wiring diagram provided in the documentation.
Calibration: Use the provided calibration function to calibrate the MPU6050 sensor for accurate angle measurements.
Upload Code: Upload the provided Arduino sketch (balancing_robot.ino) to the Teensy 4.0 microcontroller using the Arduino IDE.
Testing: Power on the robot and observe its behavior as it attempts to balance itself. Adjust PID parameters and motor control logic as needed to achieve optimal performance.
Enhancements: Explore additional features such as wireless control via Bluetooth or Wi-Fi, integration of sensors for obstacle avoidance, or implementing autonomous navigation algorithms.

Contributors:
Mohammed Hussain Nawaz: https://github.com/mrmhnawaz


License
This project is licensed under the MIT License.

