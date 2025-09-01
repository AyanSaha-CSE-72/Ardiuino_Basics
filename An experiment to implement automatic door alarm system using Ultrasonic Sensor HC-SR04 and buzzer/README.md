# 🔔 Automatic Door Alarm System using Ultrasonic Sensor HC-SR04 & Buzzer

---

## 🧪 Name of the Experiment
An experiment to implement an **automatic door alarm system** using **Ultrasonic Sensor HC-SR04** and a **buzzer**.

---

## 🎯 Objective
The objective of this lab is to **design and implement a digital door lock system** using an ultrasonic sensor interfaced with a microcontroller.  
The system will **unlock the door** when an object (e.g., a hand) is detected within a specific distance range.

---

## 🛠 Components
- Ultrasonic Sensor (**HC-SR04**)  
- Microcontroller (**Arduino Uno**)  
- Servo Motor (**door lock mechanism**)  
- Proteus Design Suite  
- Breadboard & jumper wires (for hardware setup, if applicable)  
- Additional connecting components in **Proteus**  

---

## 📐 Circuit Diagram & Connections
Connections between the components are made as follows:
<img width="700" height="424" alt="image" src="https://github.com/user-attachments/assets/8e8dbf19-7cac-42a0-9c5a-acb403c08a08" />


- **Ultrasonic Sensor (HC-SR04):**  
  - VCC → Arduino **5V**  
  - GND → Arduino **GND**  
  - Trig → Arduino **Digital Pin 9**  
  - Echo → Arduino **Digital Pin 10**

- **Servo Motor (door lock):**  
  - Control Pin → Arduino **Digital Pin 6**

- **Virtual Terminal (optional):**  
  - Arduino TX → Virtual Terminal RX  

---

## 📝 Procedure
1. Open **Proteus** and create a **new project**.  
2. Place and connect the components (**Arduino, HC-SR04, Servo, Virtual Terminal**).  
3. Write and upload the Arduino code into Proteus.  
4. Run the simulation.  
5. Observe the servo motor behavior:  
   - ✅ Unlocks (rotates) when an object is detected **within 20 cm**.  
   - 🔒 Locks (returns to original position) when the object is out of range.  

---

## 📊 Results
- The simulation successfully demonstrated the **servo motor unlocking** when an object was detected within 20 cm.  
- When no object was detected in the specified range, the **servo returned to its initial (locked) position**.  
- The system operated **consistently and accurately** based on sensor inputs.  

---

## 💬 Discussion
- The **HC-SR04 ultrasonic sensor** works by emitting a high-frequency pulse and measuring the echo time to calculate distance.  
- The **Arduino microcontroller** interprets this distance and controls the **servo motor**, simulating a door lock/unlock mechanism.  
- This ensures that the **door unlocks only when an object is within the specified range**, thereby enhancing **security**.  

---

## 🏁 Conclusion
The **digital door lock system** using an ultrasonic sensor and microcontroller was successfully **implemented and simulated in Proteus**.  
The system effectively controlled the servo motor based on real-time distance measurements, demonstrating a **reliable and secure automatic door mechanism**.  

---

