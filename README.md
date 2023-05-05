# Arduino-Car-Key-Jammer 🔑
# ❗ For Educational And Informational Purposes Only ❗
### What is that ???
> This is a small project about an RF module for an Arduino. This module can transmit at 433 MHz, which can be used to jam or disable a car key. This project is for educational and informational purposes only. In some countries, it is illegal to block a signal. I assume no liability for any damage.

### Does it work ❓
> Yes, it works, but not for every car, and 433 MHz is used in Europe, not in the USA (for the USA, it is 315 MHz or 868 & 915 MHz).
## What is a roll jam
> A roll jam is a type of jamming attack that targets wireless communication devices, such as those that use radio frequency (RF) signals to transmit and receive data. > It works by exploiting the vulnerability of some wireless devices that use a "rolling code" algorithm to prevent replay attacks.
> In a rolling code system, the transmitter and the receiver use a synchronized algorithm to generate and exchange a new code for each transmission. The code is derived >from a secret key and a counter, and it changes each time a new transmission is made. This makes it difficult for an attacker to capture and replay a code, as the >same code will not work for the next transmission.
>However, a roll jam attack can disrupt this process by interfering with the transmission of the first code sent by the transmitter. The attacker uses a jamming device >to transmit a strong signal on the same frequency as the original transmission, causing the receiver to miss the code. The attacker then quickly transmits a new code >to the receiver, which the receiver accepts as valid. The attacker can then capture the first code and use it later to replay the original transmission.
>The reason this attack works is that the rolling code algorithm assumes that each transmission will be successful, and it does not have a mechanism to detect or >recover from failed transmissions. Therefore, if the first transmission is missed, the system assumes that it was a temporary glitch and accepts the next code sent by >the attacker.
>In summary, a roll jam attack works by disrupting the synchronization between the transmitter and the receiver in a rolling code system, and exploiting the >vulnerability of the system to replay attacks.
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


## What is the range ?
> I tested it at 50m distance
#
> If you make a video of this or a block post please link my github

# ❗ It's important to be aware of the legality of jamming signals in your region before using or building such a device. ❗
