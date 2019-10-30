![img](https://github.com/Ishaan28malik/IOT-Works/blob/master/Finger-Print/Finger.PNG)

## Specifications
Here’s the specifications of the fingerprint sensor module we’re using (you should check your sensor datasheet or the specifications provided by your supplier – they shouldn’t be much different than these):

**Voltage supply**: DC 3.6 to 6.0V
**Current supply**: <120mA
**Backlight color**: green
**Interface**: UART
**Bad rate**: 9600
**Safety level**: five (from low to high: 1,2,3,4,5)
**False Accept Rate (FAR)**: <0.001% (security level 3)
**False Reject Rate (FRR)**: <1.0% (security level 3)
**Able to store 127 different fingerprints**

* The fingerprint sensor module used in this project came with really thin wires, so soldering breadboard-friendly wires was needed. We recommend using different colors according to the pin function. In our case:

DNC – white wires
VCC – red wire
TX – blue wire
RX – green wire
GND – black wire

## **Install** [Adafruit-Fingerprint-Sensor-Library](https://github.com/adafruit/Adafruit-Fingerprint-Sensor-Library/archive/master.zip)
