# Smart Motion Light with Battery Protection

**An ESP32-Based Motion Detection and Intelligent Lighting Control System**

## Project Overview

The **Smart Motion Light with Battery Protection** is an embedded system project developed to automate lighting based on human movement while incorporating battery protection functionality.

The system uses an ESP32 microcontroller integrated with a PIR motion sensor to detect human presence. Based on the detected motion, the controller operates a relay module to automatically switch the lighting load ON or OFF.

The project also incorporates battery-related monitoring and protection logic to support reliable operation of the system.

## Objectives

- Develop an automatic motion-based lighting system.
- Detect human movement using a PIR sensor.
- Control lighting operation through an ESP32 and relay module.
- Incorporate battery monitoring and protection functionality.
- Reduce unnecessary energy consumption.
- Demonstrate practical embedded system implementation.

## Hardware Components

Refer to [COMPONENTS_LIST.md](COMPONENTS_LIST.md) for the complete list of hardware components used in this project.

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- Embedded C/C++ programming
- Required sensor libraries

## System Architecture

The system consists of the following functional units:

1. **Motion Detection:** The PIR sensor detects human movement.
2. **Controller Unit:** The ESP32 receives and processes sensor signals.
3. **Lighting Control:** The relay module controls the lighting load.
4. **Battery Protection:** Battery-related monitoring and protection logic supports battery operation.

## Working Principle

1. The PIR sensor continuously monitors the surrounding area.
2. When human movement is detected, the sensor sends a signal to the ESP32.
3. The ESP32 processes the input based on the programmed conditions.
4. The relay module is activated to switch ON the lighting load.
5. The lighting operation is controlled according to the programmed motion detection and delay conditions.
6. Battery-related protection logic operates based on the implemented program.

## Circuit Diagram

The circuit diagram illustrates the connections between the ESP32, PIR sensor, relay module, battery and associated components.

![Circuit Diagram](Circuit_Diagram/circuit_diagram.png)

## Hardware Implementation

The hardware prototype was assembled using the ESP32 controller, motion sensor, relay module and supporting electronic components.

![Hardware Setup](Hardware_Setup/hardware_setup.jpg)

## Final Output

The final output demonstrates the motion-based automatic lighting operation.

![Final Output](Final_Output/final_output.jpg)

## Source Code

The complete ESP32 source code is available in the following folder:

[Arduino Source Code](Arduino_Code/)

## Project Documentation

The detailed project report is available here:

[Download Project Report](Documentation/Final_Report.pdf)

## Applications

- Smart home automation
- Automatic corridor lighting
- Staircase lighting systems
- Energy-efficient lighting applications
- Motion-based security lighting

## Future Enhancements

- IoT-based remote monitoring
- Mobile application integration
- Advanced battery health monitoring
- Solar-powered battery charging
- Wireless notifications

## Conclusion

The Smart Motion Light with Battery Protection demonstrates the practical integration of motion detection, automatic lighting control and battery-related protection using an ESP32 microcontroller.

The project provides an approach to energy-efficient lighting automation and offers opportunities for further development in embedded systems and smart automation.

---

**Project Category:** Embedded Systems | IoT | Smart Automation

**Controller:** ESP32

**Programming Platform:** Arduino IDE
---
---

## Author

**Developed by:** Bhavana R

**Department:** Electrical and Electronics Engineering (EEE)

**Project Domain:** Embedded Systems | IoT | Smart Automation




