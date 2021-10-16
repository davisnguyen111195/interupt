/*
 * File:   main.c
 * Author: RealDatNguyen
 *
 * Created on June 22, 2021, 1:25 PM
 */


#include "config.h"

void main(void) {
    TRISD = 0;
    TRISBbits.TRISB0 = 1;
    PORTD = 1;
    INTCONbits.GIE = 1;
    INTCONbits.INTE = 1;
    OPTION_REGbits.INTEDG = 1;
    INTCONbits.INTF = 0;

    
    while(1){
        
    }
    
    return;
}

void __interrupt() ISR(void){
    if(INTCONbits.INTF == 1){
        RD0 = !RD0;
        INTCONbits.INTF = 0;
    }
}
