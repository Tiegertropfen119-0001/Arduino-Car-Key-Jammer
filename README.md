# Arduino-Car-Key-Jammer 🔑
# ❗ For Educational And Informational Purposes Only ❗
### What is that ???
> This is a small project about an RF module for an Arduino. This module can transmit at 433 MHz, which can be used to jam or disable a car key. This project is for educational and informational purposes only. In some countries, it is illegal to block a signal. I assume no liability for any damage.

### Does this work ❓
> Yes, it works, but not for every car, and 433 MHz is used in Europe, not in the USA (for the USA, it is 315 MHz or 868 & 915 MHz).

## SDR Data 📶
![pic](https://github.com/Tiegertropfen119-0001/Arduino-Car-Key-Jammer/blob/main/img/fakedata.png)
### The attack mode on this picture is mode 4 (Fake data).

## Modes 
- ✅ High Power Jammer
- ✅ High freq puls
- ✅ Low freq puls
- ✅ Fake Data
- ✅ Fake Data 2

## How to use
> You can connect via the serial port at a baud rate of '9600'. Once you've done this, you can type the number '0' and send it. If everything works, you will get the following text back: '1 / High Power Jammer | 2 / High Freq Puls | 3 / Low Freq Puls | 4 / Fake Data | 5 / Fake Data 2'. Then you can choose a number to stop the jamming. To stop the jamming, you need to press the reset button on your Arduino/chip.

## What arduino do i need ?
> You can use every Arduino. I used an LGT8F328. This is a cheap copy of an Arduino Nano.
###

> If you make a video of this or a block post please link my github
