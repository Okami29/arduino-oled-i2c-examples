# Arduino OLED I2C Examples

This repository contains simple and practical examples for using a **64x32 I2C OLED display** with an **Arduino Uno**. These examples are designed for beginners and demonstrate how to display text, loop values, and use the serial monitor to interact with the display.

---

## 📦 Hardware Requirements

- Arduino Uno (or compatible board)
- 64x32 I2C OLED display (SSD1306-based)
- Jumper wires
- USB cable

---

## 🔌 Wiring Guide (I2C OLED to Arduino Uno)

| OLED Pin | Arduino Uno Pin |
|----------|------------------|
| GND      | GND              |
| VCC      | 5V               |
| SDA      | A4               |
| SCL      | A5               |

---

## 📚 Required Libraries

Install the following libraries using the **Library Manager** in the Arduino IDE:

- **Adafruit SSD1306**
- **Adafruit GFX Library**

To install:
1. Go to **Sketch > Include Library > Manage Libraries**
2. Search for `Adafruit SSD1306` and click Install
3. Do the same for `Adafruit GFX Library`

---

## 📁 Examples Included

### 1. `hello_oled.ino`
Displays a static message:  
📺 `Hello` and `Arduino OLED`

### 2. `count_loop.ino`
Displays numbers from 0 to 100 using a `for` loop. Refreshes the screen every 500ms.

### 3. `serial_input_display.ino`
Reads input from the **Serial Monitor** and displays it live on the OLED.

---

## 🛠️ How to Use

1. Clone or download this repository.
2. Open any `.ino` file in the Arduino IDE.
3. Connect your OLED and upload the sketch.
4. For `serial_input_display.ino`, open the **Serial Monitor**, type text, and press Enter.

---

## 🧾 License

This project is open-source and available under the [MIT License](LICENSE).
