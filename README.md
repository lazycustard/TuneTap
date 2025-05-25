# 🎵 TuneTap – Arduino Musical Keyboard Using 4x4 Keypad and Buzzer

## 📌 Overview

**TuneTap** is a microcontroller-based musical instrument built using an **Arduino UNO**, a **4x4 matrix keypad**, and a **passive piezoelectric buzzer**. Each key on the keypad is mapped to a musical note from **C4 to C5**, allowing users to play simple melodies. 
---

## 🧰 Components Required

- Arduino UNO (or compatible board)  
- 4x4 Matrix Keypad  
- Passive Piezo Buzzer (with `+` marking)  
- Jumper Wires  
- Breadboard  
- USB Cable for Programming  

---

## ⚙️ Circuit Connections

### 🔢 Keypad to Arduino:

| Keypad Pin | Arduino Pin |
|------------|-------------|
| R1         | 2           |
| R2         | 3           |
| R3         | 4           |
| R4         | 5           |
| C1         | 6           |
| C2         | 7           |
| C3         | 8           |
| C4         | 9           |

> 📌 **Note:** Ensure the correct pin mapping based on your keypad's wiring order. Reverse the `rowPins[]` or `colPins[]` arrays in the code if key presses don't match expected output.

### 🔔 Buzzer to Arduino

| Buzzer Pin | Arduino Pin | Description        |
|------------|-------------|--------------------|
| + (Positive) | D13        | PWM tone output    |
| – (Negative) | GND        | Ground connection  |



---

## 🎼 Note Frequency Mapping

| Key | Note | Frequency (Hz) |
|-----|------|----------------|
| 1   | C4   | 262            |
| 2   | D4   | 294            |
| 3   | E4   | 330            |
| 4   | F4   | 349            |
| 5   | G4   | 392            |
| 6   | A4   | 440            |
| 7   | B4   | 494            |
| 8   | C5   | 525            |

---

## 🧠 Features

- 8 playable musical notes using standard frequencies  
- Real-time audio output with keypad interaction  
- Simple and clean interface for beginners  
- Passive buzzer used without extra amplifier circuitry
- Interactive learning tool for tones and notes
- Input system for games and sound-triggered applications

---

## 🔁 Possible Extensions

- Add **LED indicators** for each key
- Implement **multiple octaves** with function keys
- Display the current note using an **LCD or OLED display**
- Record and playback melodies using **EEPROM or SD card**
- Interface with a **MIDI output** to connect to external synthesizers

---
## 📝 License

This project is open-source and available for educational and non-commercial use.

---




