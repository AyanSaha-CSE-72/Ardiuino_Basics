# 🔐 Digital Door Lock System using Ultrasonic Sensor (Proteus Simulation)

## 🔍 Aim
To design and simulate a **digital door lock system** using an **ultrasonic sensor** in Proteus to understand the integration of sensors, microcontrollers, and actuators for practical applications.

---

## 🎯 Objectives
- To implement a **digital door lock system** that uses an **ultrasonic sensor** for proximity sensing and a **microcontroller** for controlling the locking mechanism.  
- To simulate the behavior of the system in **Proteus** and test its **functionality** under different scenarios.

---

## 🛠 Materials
- Computer with **Proteus software** installed  
- **Arduino Uno (or other microcontroller)**  
- **Ultrasonic sensor module (HC-SR04)**  
- **Servo motor / Electronic lock mechanism**  
- **LEDs, buzzer, resistors (220Ω)**  
- Supporting electronic components and jumper wires  

---

## 📝 Procedure
1. Set up a **new project in Proteus** and choose the **Arduino Uno** as the controller.  
2. Add the **ultrasonic sensor, servo motor (lock), buzzer, and LED** to the Proteus workspace.  
3. Make the circuit connections (see below).  
4. Write the **Arduino code** to detect proximity and control the lock, buzzer, and LED.  
5. Run the **Proteus simulation** to test the behavior of the door lock system.  
6. Simulate various scenarios like:  
   - ✅ Authorized access (unlock door)  
   - ❌ Unauthorized access (keep locked)  
   - ⚠️ Faulty sensor readings  
7. Record and analyze results.  

---

## ⚡ Circuit Design
### 🔗 Connections
1. **Ultrasonic Sensor (HC-SR04):**  
   - VCC → Arduino **5V**  
   - GND → Arduino **GND**  
   - Trig → Arduino **Digital Pin 12**  
   - Echo → Arduino **Digital Pin 13**  

2. **LED:**  
   - Anode → Arduino **Digital Pin 10** (via 220Ω resistor)  
   - Cathode → **GND**  

3. **Buzzer:**  
   - Positive → Arduino **Digital Pin 7**  
   - Negative → **GND**  

---

## ⚙️ Working Principle
1. **Ultrasonic Sensor Operation:** The HC-SR04 emits an ultrasonic pulse and measures the echo time. This is used to calculate distance.  
2. **Buzzer Activation:** If the distance is **less than 10 cm**, the Arduino sets the buzzer **ON**.  
3. **LED Illumination:** If the distance is **less than 40 cm**, the Arduino turns the LED **ON**.  
4. **Serial Monitoring:** Distance values are printed in the **Serial Monitor** for observation.  

---

## 📊 Results
- The **digital door lock system** successfully detects a person approaching using the ultrasonic sensor.  
- When a person is within the predefined range, the **lock mechanism activates** to prevent unauthorized access.  
- The system correctly allows **authorized access attempts** by unlocking the door.  
- The ultrasonic sensor in Proteus simulation provides **accurate and reliable distance sensing**.  

---

## 💬 Discussion
The experiment demonstrates the successful **integration of an ultrasonic sensor** into a digital door lock system.  

- The system provides **real-time responsiveness** by detecting proximity and activating the lock accordingly.  
- Compared to traditional mechanical locks or keypad-based systems, this sensor-based approach improves **automation, reliability, and ease of access**.  
- This design can be further improved by adding **password authentication, RFID, or IoT connectivity** for enhanced security.  

---

## 🏁 Conclusion
This project successfully simulated a **digital door lock system** using an ultrasonic sensor in Proteus.  
It highlights the **practical applications** of combining sensors, microcontrollers, and actuators for **smart security systems**.  

