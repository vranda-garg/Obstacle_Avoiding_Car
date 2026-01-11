
# 🚗 Obstacle Avoiding Car 

## 📌 Project Overview

The ** Obstacle Avoiding Car** is an Arduino-based robotic vehicle that is **manually controlled using a smartphone via Bluetooth**.  
An obstacle detection sensor is used **only to assist the user** by detecting nearby objects, while **all movements are controlled through a mobile device**.

This project focuses on **wireless robot control**, **sensor interfacing**, and **embedded system design**.

----------

## 📝 Project Description

This project demonstrates a robotic car that is operated using a **Bluetooth module (HC-05/HC-06)** connected to an Arduino Uno. The user sends movement commands (forward, backward, left, right, stop) from a mobile application.

An obstacle sensor continuously monitors the surroundings and helps detect nearby objects. The robot **does not move automatically**—all motion decisions are made by the user through Bluetooth commands, making this a **fully manual wireless robot**.

----------

## 🧰 Components Used

-   Arduino Uno
    
-   Bluetooth Module (HC-05 / HC-06)
    
-   Ultrasonic Sensor 
    
-   Motor Driver Module (L298N / L293D)
    
-   DC Motors
    
-   Robot Chassis
    
-   Lithium Battery
    
-   Jumper Wires
    

----------

## 💻 Software and Tools Used

-   Arduino IDE
    
-   Embedded C / Arduino Programming
    
-   Bluetooth Controller Mobile App
    
-   USB Cable
    

----------

## ⚙️ Working Principle

1.  The Bluetooth module establishes a wireless connection with a mobile phone.
    
2.  The user sends control commands from the mobile app.
    
3.  Arduino receives commands via serial communication.
    
4.  Based on the command:
    
    -   Motors move forward, backward, left, right, or stop.
        
5.  The obstacle sensor detects nearby objects and provides feedback to the system.
    
6.  The user controls movement accordingly to avoid collisions.
    

----------

## 🧠 Algorithm

1.  Start the system
    
2.  Initialize Bluetooth module, motor driver, and sensor
    
3.  Wait for Bluetooth command
    
4.  Receive command from mobile app
    
5.  Move motors according to command
    
6.  Read obstacle sensor data
    
7.  Repeat continuously
    

----------

## ▶️ How to Run the Project

1.  Assemble the robot and connect all components as per the circuit diagram
    
2.  Connect Arduino Uno to the computer
    
3.  Open Arduino IDE
    
4.  Select **Arduino Uno** and correct COM port
    
5.  Upload the code
    
6.  Power the robot using the lithium battery
    
7.  Open a Bluetooth controller app on your mobile
    
8.  Pair the phone with the Bluetooth module
    
9.  Control the robot wirelessly using the app
    

----------

## 🎯 Expected Outcomes

-   Successful Bluetooth pairing and communication
    
-   Smooth manual control of robot movement
    
-   Accurate response to mobile commands
    
-   Reliable obstacle detection assistance
    

----------

## 🏫 Applications

-   Bluetooth-controlled robots
    
-   Wireless robotic vehicles
    
-   Robotics learning and demonstrations
    
-   Smart vehicle prototypes
    
-   Educational embedded system projects
    

----------

## ✅ Advantages

-   Wireless control using smartphone
    
-   Simple and user-friendly operation
    
-   Low-cost and efficient design
    
-   Real-time robot control
    
-   Easy to modify and expand
    

----------

## 🚀 Future Improvements

-   Add autonomous mode switch
    
-   Voice control via Bluetooth
    
-   Custom Android application
    
-   Obstacle warning using buzzer or LED
    
-   Camera-based live monitoring
    

--------