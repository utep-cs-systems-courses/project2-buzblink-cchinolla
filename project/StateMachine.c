#include <msp430.h>
#include "StateMachine.h"
#include "led.h"
//#include "buzzer.h"
#include "switches.h"

static char count = 0;
void countToThree(){
  switch(count){
  }
}


void state_advance(){
  switch(state){
  case 0:
    break;
  case 1:
    redLight();
    state = 0;
    break;
  case 2:
    greenLight();
    state = 0;
    break;
  case 3:
    bothLights();
    state = 0;
    break;
  case 4:
    dimLights();
    state = 0;
    break;
  }
}
