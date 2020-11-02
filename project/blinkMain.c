//Alternate LEDs from Off, Green, and red
#include <msp430.h>
#include "libTimer.h"
#include "led.h"

int main(void){
  configureClocks();/*setuup master oscillator, CPU & peripheeral clocks*/
  led_init();
  enableWDTInterrupts();/*ena
