# 🌙 Darkness Detection System using LDR and Arduino

---

## 🎯 Objective
The objective of this experiment is to **design a circuit that detects darkness using an LDR (Light Dependent Resistor)** and activates an LED when the ambient light level falls below a certain threshold.

---

## 🛠 Components
- Light Dependent Resistor (**LDR**)  
- Microcontroller (**Arduino Uno**)  
- LED  
- Resistor (**10kΩ** for voltage divider with LDR)  
- Resistor (**220Ω** for LED)  
- Breadboard  
- Jumper wires  
- USB cable for programming the microcontroller  

---

## 📐 Circuit Diagram 
<img width="784" height="694" alt="image" src="https://github.com/user-attachments/assets/391e5b4e-38e3-4049-9e57-c511686e12b0" />

## Connections
1. Connect one terminal of the **LDR** to **5V** on the Arduino.  
2. Connect the other terminal of the **LDR** to both **A0** on the Arduino and one terminal of the **10kΩ resistor**.  
3. Connect the other terminal of the **10kΩ resistor** to **GND** on the Arduino.  
4. Connect the **LED’s anode (longer leg)** to **digital pin 13** on the Arduino through a **220Ω resistor**.  
5. Connect the **LED’s cathode (shorter leg)** to **GND** on the Arduino.  

---

## 📝 Procedure
1. **Setup the Hardware** as per the circuit diagram.  
2. **Programming the Arduino**:  
   - Write a program to read the analog values from the LDR.  
   - When the ambient light level falls below a predefined threshold, turn on the LED.  
   - Upload the program to the Arduino using the Arduino IDE.  

---
## ✅ Results
After completing the circuit and uploading the code:

- The **LED turns ON** when the ambient light level falls below the threshold value (darkness).  
- The **LED turns OFF** when the ambient light level is above the threshold (light).  

---

## 💬 Discussion
- The experiment demonstrates the use of an **LDR to detect darkness** and control an LED.  
- The **LDR’s resistance changes** with the intensity of light.  
- The **Arduino effectively reads** the analog values and switches the LED accordingly.  
- The **threshold value** may need adjustments based on specific lighting conditions of the environment.  

---

## 🏁 Conclusion
This experiment illustrates a **simple yet effective way to detect darkness** using an LDR and control an LED.  

It can be extended to applications like:  
- Automatic night lamps  
- Garden lights  
- Security systems  

By adjusting the threshold value, the system’s **versatility and applicability** can be enhanced.  

---
