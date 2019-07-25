////*
===============================================================================
 Name        : led.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*//

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>



int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
    //Board_LED_Set(1, true);
   // Board_LED_Set(2, true);
#endif
#endif

    // TODO: insert code here

    // Force the counter to be placed into memory
    volatile static int i = 0 ;
    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	int k,j;
    	    		Board_LED_Set(0,false);
    	    		Board_LED_Set(1,true);
    	    		Board_LED_Set(2,true);
    	    		for(k=0;k<5000;k++)
    	    		{
    	    			for(j=0;j<2000;j++)
    	    		{}
    	    		}

    	    			    Board_LED_Set(0,true);
    	    				Board_LED_Set(1,false);
    	    				Board_LED_Set(2,true);
    	    				for(k=0;k<5000;k++)
    	    				{
    	    					for(j=0;j<2000;j++)
    	    				{}
    	    					}
    	    							Board_LED_Set(0,true);
    	    							Board_LED_Set(1,true);
    	    							Board_LED_Set(2,false);
    	    							for(k=0;k<5000;k++)
    	    							{
    	    								for(j=0;j<2000;j++)
    	    			    	    	{}
    	    							}
                       Board_LED_Set(0,false);
                       Board_LED_Set(1,true);
                       Board_LED_Set(2,false);
                       for(k=0;k<5000;k++);
                       {
                       for(j=0;j<2000;j++)
                       {}
                   }



    	    i++ ;
    }
    return 0 ;
}
