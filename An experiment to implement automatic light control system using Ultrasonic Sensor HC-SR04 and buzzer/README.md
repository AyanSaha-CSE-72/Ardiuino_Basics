# Automatic Light Control System using Ultrasonic Sensor HC-SR04 and Buzzer

## 🎯 Objective
The objective of this experiment is to design and implement an automatic light control system that turns on a light and sounds a buzzer when an object is detected within a certain distance using an **Ultrasonic Sensor HC-SR04**.

---

## 🔧 Components
- Ultrasonic Sensor HC-SR04  
- Microcontroller (e.g., Arduino Uno)  
- LED  
- Resistor (220Ω for LED)  
- Buzzer  
- Breadboard  
- Jumper wires  
- USB cable for programming the microcontroller  

---

## 🖥️ Circuit Diagram
<img width="972" height="661" alt="image" src="https://github.com/user-attachments/assets/fde2ca6d-e1e5-4f1d-a666-a1500f94da1c" />


---

## ⚙️ Procedure
1. **Setup the Hardware:**
   - Connect the **VCC** pin of the HC-SR04 to the **5V** pin on the Arduino.  
   - Connect the **GND** pin of the HC-SR04 to the **GND** pin on the Arduino.  
   - Connect the **TRIG** pin of the HC-SR04 to **digital pin 9** on the Arduino.  
   - Connect the **ECHO** pin of the HC-SR04 to **digital pin 10** on the Arduino.  
   - Connect the **LED’s anode** (longer leg) to **digital pin 13** on the Arduino through a **220Ω resistor**.  
   - Connect the **LED’s cathode** (shorter leg) to **GND** on the Arduino.  
   - Connect the **buzzer’s positive terminal** to **digital pin 12** on the Arduino.  
   - Connect the **buzzer’s negative terminal** to **GND** on the Arduino.  

2. **Programming the Microcontroller:**
   - Write a program to measure the distance using the ultrasonic sensor.  
   - Turn on the LED and sound the buzzer when the measured distance is less than a predefined threshold.  
   - Upload the program to the Arduino using the **Arduino IDE**.  

---

## 📊 Results
- After completing the circuit and uploading the code, the system automatically turns on the LED and sounds the buzzer when an object is detected within the threshold distance.  
- The LED and buzzer turn off when the object moves away beyond the threshold distance.  

---

## 💬 Discussion
- The experiment successfully demonstrates the use of an ultrasonic sensor to detect the presence of an object and control a light and buzzer based on the detection.  
- The **HC-SR04 ultrasonic sensor** accurately measures the distance, and the Arduino code effectively turns on the LED and sounds the buzzer when an object is within the specified range.  
- Adjusting the distance threshold can adapt the system for various applications.  

---

## ✅ Conclusion
This experiment illustrates a simple yet effective way to implement an **automatic light control system** using an ultrasonic sensor and a buzzer. The setup can be extended to other applications where proximity detection is required, such as:  
- Automated door openers  
- Obstacle detection systems  
- Interactive projects  

Adjusting the threshold distance enhances the system's versatility and applicability.

