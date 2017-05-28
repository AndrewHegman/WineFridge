#include <msp430.h> 
#include "GPIO.h"



int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	return 0;
}
