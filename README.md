# Boardoza Data Logger Multi Sensor Logging Module

The **Boardoza Data Logger** is a powerful and compact data acquisition module designed for robust environmental, positional, and motion data logging. Built around the **ESP32-S module**, it combines high-performance on-board processing with wireless connectivity, making it ideal for both standalone and connected data logging applications.

By integrating multiple advanced sensors—including a 9-axis IMU, high-resolution barometric pressure sensor, and a precision GPS module—this board provides a complete solution for recording motion, altitude, orientation, and location data. With support for MicroSD storage and a wide input voltage range, the Boardoza Data Logger is well-suited for long-duration deployments in demanding environments such as aerospace experiments, environmental monitoring, robotics, and mobile data recording systems.

## [Click here to purchase!](https://www.ozdisan.com/p/arduino-sensorleri-ve-modulleri-613/boardoza-data-logger-1473935?=arduino-sensorleri-ve-modulleri-613&=boardoza-data-logger-1473935)

| Front Side | Back Side |
|:---:|:---:|
| ![Data Logger Front](./assets/DATA_LOGGER%20Front.png) | ![Data Logger Back](./assets/DATA_LOGGER%20Back.png) |

---

## Key Features

- **ESP32-S Module MCU:** Dual-core microcontroller with integrated Wi-Fi and Bluetooth for wireless data transmission.
- **Integrated 9-Axis IMU:** Combines accelerometer, gyroscope, and magnetometer for accurate motion and orientation tracking.
- **High-Resolution Barometric Sensor:** Enables precise pressure and altitude measurements.
- **Onboard GPS Module:** Provides reliable global positioning, speed, and navigation data.
- **MicroSD Card Support:** Allows long-term local data logging without external connectivity.
- **Wide Input Voltage Range:** Supports flexible power sources through an onboard buck-boost regulator.
- **External Expansion Pins:** Accessible I²C and GPIO pins for additional sensors and peripherals.
- **Designed for Harsh Environments:** Suitable for mobile, outdoor, and experimental applications.

---

## Technical Specifications

**Model:** Data Logger  
**Manufacturer:** Boardoza  
**MCU:** ESP32-S Module  
**Wireless Connectivity:** Wi-Fi (802.11 b/g/n/d/e/i/k/r), Bluetooth v4.2 BR/EDR and BLE    
**IMU Sensor:** BNO055 (9-axis: accelerometer, gyroscope, magnetometer, temperature)  
**Pressure and Temperature Sensor:** MS5611-01BA03  
**GPS Module:** u-blox SAM-M8Q  
**Input Voltage:** 3 V – 16 V  
**Voltage Regulation:** Onboard buck-boost regulator  
**Data Storage:** MicroSD Card  
**External Interfaces:** I²C, GPIO  
**Measured Data:** Acceleration, angular velocity, magnetic field, pressure, altitude, temperature, location, speed, timestamp     
**Operating Temperature:** -40 °C to +85 °C  
**Board Dimensions:** 40 mm × 80 mm

---

## Board Pinout

### **( J1 ) Power Connector**

| Pin Number | Pin Name | Description |
| --- | --- | --- |
| 1 | + | Power Input |
| 2 | - | Ground |

### **( J2 ) Power Connector**

| Pin Number | Pin Name | Description |
| --- | --- | --- |
| 1 | + | Power Input |
| 2 | - | Ground |

### **( J4 ) I²C Connector**

| Pin Number | Pin Name | Description |
| --- | --- | --- |
| 1 | 3V3 | 3.3V Output |
| 2 | SCL | I²C Serial Clock |
| 3 | SDA | I²C Serial Data |
| 4 | GND | Ground |

### **( J5 ) GPIO Connector**

| Pin Number | Pin Name | Description |
| --- | --- | --- |
| 1 | IO34 | ESP32 GPIO34 |
| 2 | IO17 | ESP32 GPIO17 |
| 3 | IO16 | ESP32 GPIO16 |
| 4 | IO15 | ESP32 GPIO15 |

---

## Sample Flight Data

Example altitude profile recorded during an amateur rocket flight:

![Altitude Graph](./assets/Altitude%20Graph.png)

- Maximum altitude ~1,440 meters  
- Smooth ascent profile followed by controlled descent  
- Data logged using onboard MicroSD  

**Raw data file:**  
[Flight1.csv](./assets/_Flight1.csv)

**Simulation video:**  
[Data Logger Simulation.mp4](./assets/Data%20Logger%20Simulation.mp4)

---

## Board Dimensions

![Board Dimensions](./assets/DATA_LOGGER%20Dimensions.png)

---

## Step Files

[Boardoza Data Logger.step](./assets/DATA_LOGGER%20Step.step)

---

## Datasheets

- [BNO055 Datasheet](./assets/BNO055%20Datasheet.pdf)   
- [MS5611-01BA03 Datasheet](./assets/MS5611-01BA03%20Datasheet.pdf)  
- [SAM-M8Q Datasheet](./assets/SAM_M8Q%20Datasheet.pdf)  
- [TPS63070 Datasheet](./assets/TPS63070%20Datasheet.pdf)    

---

## Version History

- V1.0.0 – Initial Release

---

## Support

- If you have any questions or need support, please contact **support@boardoza.com**

---

## **License**

This repository contains both hardware and software components:

### **Hardware Design**

[![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

All hardware design files are licensed under [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg

### **Software/Firmware**

[![BSD-3-Clause][bsd-shield]][bsd]

All software and firmware are licensed under [BSD 3-Clause License][bsd].

[bsd]: https://opensource.org/licenses/BSD-3-Clause
[bsd-shield]: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
