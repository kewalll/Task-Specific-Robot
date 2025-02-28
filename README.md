# RoboCup 2019 – Team Nirma Vidyavihar

## Overview  
This repository documents the design, development, and execution of our **task-specific robot** for the **Nirma National RoboCup 2019**, where we secured **All India Rank 3**. The competition was themed **"Govinda"**, requiring our robot to complete multiple dynamic challenges, including **removing obstacles (cardboard butter cubes), displacing a ball, and knocking down a "matki" (pot)**.

## Team Details  
- **Competition:** Nirma National RoboCup 2019  
- **Achievement:** **AIR 3** 🏆  
- **Institution:** Nirma Vidyavihar, Ahmedabad, Gujarat  
- **Role:** **Team Leader** (July 2019 – January 2020)  

---

## Robot Functionality  
Our robot was designed **manually** perform the following tasks:

### 🛑 Obstacle Removal (Butter Cube Clearing)  
- Designed a **mechanized pushing arm** to **clear obstacles (cardboard butter cubes)** from the designated path.  
- Implemented **servo motors** for controlled extension and retraction of the arm.  

### ⚽ Ball Displacement  
- Developed a **motorized sweeping mechanism** to **push the ball out of the playing area**.  

### 🏺 Matki Knocking Mechanism  
- Engineered an **extendable striker arm** capable of reaching and **breaking the suspended "matki" (pot)**.  
- Ensured proper force calculation to break the pot without exceeding weight constraints.  

---

## Technology & Components Used  

### **Hardware:**  
- **Microcontroller:** Arduino Uno  
- **Communication Module:** HC-05 Bluetooth Module  
- **Motor Driver:** L293D  
- **Motors:** Servo Motors, DC Motors  
- **Power Source:** Lithium Polymer (LiPo) Battery  

### **Software & Programming:**  
- **Programming Language:** C++ (Arduino)  
- **Development Tools:** Arduino IDE  
- **Control Mechanism:** Bluetooth-based Wireless Control (HC-05)  

---

## Challenges & Solutions  
🔹 **Obstacle Removal Mechanism:** Designed a **pusher arm** that could **clear multiple obstacles efficiently** without losing stability.  
🔹 **Matki Striking Accuracy:** Tuned the extendable arm to ensure proper force application while maintaining balance.  
🔹 **Ball Displacement Strategy:** Developed a **sensor-based approach** for detecting the ball's position and applying controlled force.  

---

## Results & Impact  
✅ Successfully **completed all tasks in under 50 seconds**, showcasing our robot's efficiency and precision.
✅ Achieved **3rd place nationally (AIR 3)**, making it one of our best performances in RoboCup history.  
✅ Developed a **structured approach to robotics problem-solving**, enhancing our team's expertise in robotics competitions.  

---

## Repository Contents  
- `/code/` - Arduino source code for robot control  

