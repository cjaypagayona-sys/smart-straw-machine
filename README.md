Smart Straw Machine

Introduction

- The Smart Straw Machine is an automated system designed to release drinking straws using sensors and motorized mechanisms. The machine detects a user’s hand or object and automatically dispenses a straw safely and efficiently.

Features:

- Automatic straw dispensing

- Ultrasonic sensor detection

- Servo motor mechanism

- Touchless operation

- Compact and easy-to-use design

Components Used:

- SG90 Servo Motor

- Arduino Nano

- Ultrasonic Sensor

- Power Supply

- Conveyor System

How It Works:

1.The machine detects a hand or material using the ultrasonic sensor.

2.Distance is calculated using the formula:
distance=duration×0.034/15cm

3.When an object is detected within the set distance, the servo motor automatically activates.

4.The internal mechanism moves and prepares the straw.

5.Straws are released through the opening.

Objectives:

- To create a touchless straw dispensing system

- To improve convenience and hygiene

- To demonstrate automation using Arduino technology

Future Improvements:

- LCD display monitoring

- Mobile app integration

- Faster dispensing mechanism

- Battery backup system

Developers:

- Name:Cyrus Jay Pgayona

 Group Members:

 - Vince Marlon Lagan

 - Justine Carl Abria

 - JDerric  Cantila

 - Jhon Rey Fernandez 

##License

This project is for educational purposes only.

Pseudocode

START

Initialize TRIG_PIN as OUTPUT
Initialize ECHO_PIN as INPUT
Initialize SERVO_PIN

Attach servo motor to SERVO_PIN
Set servo position to CLOSED (0 degrees)

LOOP forever:

    Send ultrasonic pulse from TRIG_PIN
    Read echo signal from ECHO_PIN

    Compute distance:
        distance = duration * 0.034 / 2

    Display distance on serial monitor

    IF distance > 0 AND distance <= 15 THEN
        Move servo to OPEN position (130 degrees)
        Wait for OPEN_DELAY
    ELSE
        Move servo to CLOSED position (0 degrees)
    ENDIF

    Wait for LOOP_DELAY

END LOOP

END
