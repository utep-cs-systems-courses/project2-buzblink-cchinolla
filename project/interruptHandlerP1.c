#include <msp430.h>
#include "switches.h"

void __interrupt_vec(PORT1_VECTOR) Port_1(){
  if(P2IFG & SWITCHES){
    P2IFG &= ~SWITCHES;
    switch_interrupt_handler();
  }
}
