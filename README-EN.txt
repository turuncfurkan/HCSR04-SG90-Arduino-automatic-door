# 🚪 Arduino Automatic Door / Barrier System

This project is an automatic **door/barrier control system** developed using an **HC-SR04 ultrasonic sensor**, **SG90 micro servo motor**, **red LED**, and a **passive buzzer**. When an object is detected within 1 meter, the system automatically opens the door, turns on the LED, activates the buzzer, and closes it again after 5 seconds.

---

## 🎯 Project Purpose

- Detect an approaching hand, vehicle, or any object  
- Automatically control a door or barrier  
- Provide simple automation for entry/exit systems  
- Teach sensor and servo integration  

This project serves as both a hobby and educational application, providing a foundation in **embedded systems**, **Arduino programming**, **sensor usage**, and **automation**.

---

## 🧩 Components Used

| Component | Description |
|----------|-------------|
| **Arduino UNO** | Main control board |
| **HC-SR04 Ultrasonic Sensor** | Distance measurement (0–400 cm) |
| **SG90 Micro Servo Motor** | Opens and closes the door |
| **Red LED** | Visual alert |
| **220Ω Resistor** | For LED |
| **3-pin Passive Buzzer** | Audible alert |
| **Breadboard** | For circuit connections |
| **Jumper Wires** | For wiring |

---

## 🔌 Circuit Connections

### 🟦 **HC-SR04 Ultrasonic Sensor**
- VCC → 5V  
- GND → GND  
- TRIG → D8  
- ECHO → D7  

### 🟩 **SG90 Servo Motor**
- Brown (GND) → GND  
- Red (VCC) → 5V  
- Orange (Signal) → D9  

### 🔴 **LED**
- Long leg → 220Ω resistor → D6  
- Short leg → GND  

### 🔊 **3-Pin Passive Buzzer**
- S (Signal) → D5  
- + → 5V  
- – → GND  

⚠ **Important:**  
All components must share a **common GND**.

---

## ⚙️ Working Principle

1. The HC-SR04 sensor measures the distance of surrounding objects.  
2. If the distance is **1 meter or less**:
   - The servo motor rotates to 90° and opens the door  
   - The LED turns on  
   - The buzzer emits a short alert sound  
3. The door remains open for **5 seconds**  
4. Then the servo returns to 0° and closes the door  
5. The LED and buzzer turn off  

---

## 💻 Arduino Code

The complete Arduino code for the project is provided in the `automatic_door.ino` file.

---

## 🧑‍💻 Learning Outcomes

Through this project, experience was gained in:

- Using an ultrasonic sensor  
- Controlling a servo motor  
- Implementing LED and buzzer alert systems  
- Understanding embedded system logic  
- Developing real-time applications with Arduino  

---

