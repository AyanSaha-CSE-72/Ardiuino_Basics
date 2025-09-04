# 👀 Human Movement Detection using PIR Sensor and Arduino

---

## 🎯 Objective
The objective of this experiment is to **design and implement a system that detects human movement** using a PIR (Passive Infrared) motion sensor and an Arduino microcontroller.  
When movement is detected, an **LED will be activated**.

---

## 🛠️ Components
- PIR Motion Sensor  
- Microcontroller (e.g., Arduino Uno)  
- LED  
- Resistor (220 ohms for LED)  
- Breadboard  
- Jumper wires  
- USB cable for programming the microcontroller  

---

## 🔌 Circuit Diagram
Connections are made as follows:  
<img width="975" height="527" alt="image" src="https://github.com/user-attachments/assets/3f267ead-08e6-46b4-a065-b0ab86ffe89e" />

- **PIR Sensor:**  
  - VCC → Arduino 5V  
  - GND → Arduino GND  
  - OUT → Arduino Digital Pin 2  

- **LED:**  
  - Anode (longer leg) → Arduino Digital Pin 13 (via 220Ω resistor)  
  - Cathode (shorter leg) → GND  

---

## ⚙️ Procedure
1. Connect the PIR motion sensor and LED to the Arduino as described above.  
2. Write an Arduino program to:  
   - Continuously read the PIR sensor output.  
   - Turn **ON** the LED when motion is detected.  
   - Turn **OFF** the LED when no motion is detected.  
3. Upload the code to the Arduino using the Arduino IDE.  
4. Test the system by moving within the PIR sensor’s detection range.  

---

## ✅ Results
After completing the circuit and uploading the code:  

- The **LED is activated** when the PIR sensor detects human movement.  
- The **LED turns off** when no movement is detected.  

---

## 💬 Discussion
- The experiment demonstrates the use of a **PIR motion sensor to detect human movement** and control an LED.  
- The PIR sensor detects **infrared radiation** emitted by humans and other warm-blooded animals.  
- The Arduino reads the **digital output** of the PIR sensor to determine if movement is present.  
- The system is **sensitive to motion** within the sensor's detection range and angle.  

---

## 🏁 Conclusion
This experiment illustrates a **simple yet effective way to detect human movement** using a PIR motion sensor and Arduino microcontroller.  

It can be extended to applications such as:  
- Security systems  
- Automated lighting  
- Interactive projects  

By adjusting the sensor’s position and sensitivity, the system’s **accuracy and applicability** can be enhanced.  

---

