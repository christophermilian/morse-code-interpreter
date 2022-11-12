/* Christopher Milian
 * 11/11/2022
*/

#include "mbed.h"


// dit length in milliseconds for 20 words per minute
#define LETTER_BLINK_RATE   60ms


int main()
{
    // Digital pin LED1 as an output
    DigitalOut led(LED1);

    while (true) {
        led = !led;
        ThisThread::sleep_for(LETTER_BLINK_RATE);
    }
}
