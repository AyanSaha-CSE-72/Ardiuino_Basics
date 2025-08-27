# 🚨 Gas Leak Detection and Alarm System using MQ2 Sensor and Arduino

## 📌 Objective
The objective of this experiment is to **design and implement a gas leak detection and alarm system** using the MQ2 gas sensor and an Arduino microcontroller.  
When the sensor detects a gas concentration above a certain threshold, an **LED** and a **buzzer** will be activated to signal an alarm.

---

## 🛠 Components Required
- MQ2 Gas Sensor  
- Arduino Uno (or compatible microcontroller)  
- LED  
- Resistor (220Ω for LED)  
- Buzzer  
- Breadboard  
- Jumper Wires  
- USB Cable (for programming the Arduino)  

---

## ⚡ Circuit Diagram
- **MQ2 Sensor → Arduino**
  - VCC → 5V  
  - GND → GND  
  - AO (Analog Output) → A0  

- **LED → Arduino**
  - Anode (+) → Pin 13 (through 220Ω resistor)  
  - Cathode (–) → GND  

- **Buzzer → Arduino**
  - Positive (+) → Pin 12  
  - Negative (–) → GND  

---

## 📝 Procedure
1. **Setup the Hardware**  
   - Connect the MQ2 sensor, LED, and buzzer to the Arduino according to the circuit diagram.

2. **Programming the Arduino**  
   - Write a program to read the analog values from the MQ2 sensor.  
   - If the gas concentration exceeds a predefined threshold, the LED and buzzer will be activated.  
   - Upload the program to the Arduino using the Arduino IDE.

---


## ✅ Results

When the gas concentration exceeds the threshold value (300):

- The **LED blinks**.  
- The **buzzer beeps**.  
- The alarm stops automatically when the gas concentration falls below the threshold.  
- The system provides **clear visual and audio alerts**, indicating a gas leak effectively.

---

## 💡 Discussion

- The **MQ2 sensor** is sensitive to multiple gases such as LPG, methane, propane, hydrogen, and smoke.  
- The Arduino code successfully reads the analog values and triggers the alarm when necessary.  
- Threshold values can be adjusted according to the type of gas and environmental conditions.  
- This simple system demonstrates an effective method for early gas leak detection using affordable components.

---

## 🏁 Conclusion

- The experiment demonstrates a **gas leak detection and alarm system** using MQ2 and Arduino.  
- It is **cost-effective**, easy to set up, and provides early warnings in kitchens, laboratories, or industrial areas.  
- By adjusting the **threshold value** and alarm pattern, the system can be customized for **real-world safety applications**.

