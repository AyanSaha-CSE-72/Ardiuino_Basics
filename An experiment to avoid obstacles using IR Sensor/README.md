# 🚧 Obstacle Avoidance System using IR Sensor and Arduino

---

## 🎯 Objective
The objective of this experiment is to **design and implement an obstacle avoidance system** using an IR (Infrared) sensor and an Arduino microcontroller.  
The system will detect obstacles and **activate an LED and buzzer** to signal their presence.

---

## 🛠️ Components
- IR Sensor Module  
- Microcontroller (e.g., Arduino Uno)  
- LED  
- Resistor (220 ohms for LED)  
- Buzzer  
- Breadboard  
- Jumper wires  
- USB cable for programming the microcontroller  

---

## 🔌 Circuit Diagram
Connections are made as follows:
<img width="1095" height="539" alt="image" src="https://github.com/user-attachments/assets/8d2408d9-9604-45cf-bbe6-d05a16696602" />


- **IR Sensor**  
  - VCC → Arduino 5V  
  - GND → Arduino GND  
  - OUT → Arduino Digital Pin 2  

- **LED**  
  - Anode (long leg) → Arduino Digital Pin 13 (via 220Ω resistor)  
  - Cathode (short leg) → GND  

- **Buzzer**  
  - Positive terminal → Arduino Digital Pin 12  
  - Negative terminal → GND  

---

## ⚙️ Procedure
1. Connect the IR sensor, LED, and buzzer to the Arduino as described above.  
2. Write an Arduino program to:  
   - Continuously read the digital output from the IR sensor.  
   - **Turn ON** the LED and buzzer when an obstacle is detected.  
   - **Turn OFF** the LED and buzzer when no obstacle is detected.  
3. Upload the code to the Arduino using the Arduino IDE.  
4. Test the system by placing objects in front of the IR sensor.  

---

## ✅ Results
After completing the circuit and uploading the code:  

- The **LED and buzzer are activated** when the IR sensor detects an obstacle.  
- The **LED and buzzer turn OFF** when no obstacle is detected.  

---

## 💬 Discussion
- The experiment demonstrates the use of an **IR sensor to detect obstacles** and control an LED and buzzer based on detection.  
- The IR sensor emits **infrared light** and measures the reflected signal to detect obstacles.  
- The Arduino effectively reads the **digital output** of the IR sensor to determine the presence of obstacles.  
- The system is **sensitive to objects** within the sensor's detection range.  

---

## 🏁 Conclusion
This experiment illustrates a **simple yet effective way to avoid obstacles** using an IR sensor and Arduino microcontroller.  

It can be extended to applications such as:  
- Robotics  
- Automated vehicles  
- Interactive projects  

By adjusting the **sensor’s position and sensitivity**, the system’s **accuracy and applicability** can be enhanced.  

---

