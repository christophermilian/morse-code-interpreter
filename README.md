# Morse Code Interpreter

## Application functionality

The `main()` function is the single thread in the application. It toggles the state of a digital output connected to an LED on the board.

**Note**: This example requires a target with RTOS support, i.e. one with `rtos` declared in `supported_application_profiles` in `targets/targets.json` in [mbed-os](https://github.com/ARMmbed/mbed-os). 

## Expected output
The LED on your target turns on and off to represent the sent word. 

The following are lists describing the dits and dahs for each character set.

## English Letters
A: dit dah 
B: dah dit dit dit 
C: dah dit dah dit
D: dah dit dit
E: dit
F: dit dit dah dit
G: dah dah dit
H: dit dit dit dit
I: dit dit
J: dit dah dah dah
K: dah dit dah
L: dit dah dit dit
M: dah dah
N: dah dit
O: dah dah dah
P: dit dah dah dit
Q: dah dah dit dah
R: dit dah dit
S: dit dit dit
T: dah
U: dit dit dah
V: dit dit dit dah
W: dit dah dah
X: dah dit dit dah
Y: dah dit dah dah
Z: dah dah dit dit

## Single Digit Numbers
0: dah dah dah dah dah
1: dit dah dah dah dah
2: dit dit dah dah dah
3: dit dit dit dah dah
4: dit dit dit dit dah
5: dit dit dit dit dit
6: dah dit dit dit dit
7: dah dah dit dit dit
8: dah dah dah dit dit
9: dah dah dah dah dit

## Special Characters
.: dit dah dit dah dit dah
,: dah dah dit dit dah dah
?: dit dit dah dah dit dit
': dit dah dah dah dah dit
!: dah dit dah dit dah dah
&: dit dah dit dit dit 
:: dah dah dah dit dit dit
;: dah dit dah dit dah dit


## Related Links

* [Mbed OS Stats API](https://os.mbed.com/docs/latest/apis/mbed-statistics.html).
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Mbed OS bare metal](https://os.mbed.com/docs/mbed-os/latest/reference/mbed-os-bare-metal.html).
* [Mbed boards](https://os.mbed.com/platforms/).
