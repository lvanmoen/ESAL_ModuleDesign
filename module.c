//**Quick Instructions**//

//This is the c file for Quiz3.
//Insert your code and documentation as described in the
//software design lecture.  
//Only insert code in between your group number and before
//the next group number for each section.  
//Do not delete any text.


//**Begin File**//

//descriptions************

//group1

//group2

//group3

//group4

//group5

//group6



//external variables *********

//group1

//group2

//group3

//group4

//group5

//group6


//includes************

#include "module.h"

//defines************
													//ring has 60 leds*
//group1


//group2

//group3

//group4

//group5

//group6

//structs************

//group1

//group2

//group3

//group4

//group5

//group6


//global variables ************


//group1

private int WSPort;  //Port for LEDs
private int WSPin;	//Pin for LEDs

//group2

//group3

//group4

//group5

//group6

//private prototypes ************

//group1
void SetupPins(int WSPort, int WSPin); //Function that inititalizes pin to output, store ports and pin number in a variable.
void SendOne(void);  //Sends a logical '1' in a certain time interval
void SysTickWait(unsigned long delay)  //Time delay Function
	
//group2

//group3

//group4

//group5

//group6

//code ************

//group1


SetupPins(int WSPort, int WSPin)
{
	GPIOPinTypeGPIOOutput(WSPort, WSPin); // set pin 'WSPin' to output on port 'WSPort'
}

SendOne(void)
{
	// 80 MHz core clock (12.5 ns or 0.0125 us)
	//Using Data sheet T1H must be '1' for 0.7us, then '0' for 0.6 us. 
	NVIC_ST_CTRL_R = 0; // disable SysTick during setup
	NVIC_ST_RELOAD_R = NVIC_ST_RELOAD_M; // maximum reload value
	NVIC_ST_CURRENT_R = 0; // any write to current clears it	 
	NVIC_ST_CTRL_R = NVIC_ST_CTRL_ENABLE + NVIC_ST_CTRL_CLK_SRC; // enable SysTick with core clock

	unsigned long i;  //Long used for timer

	
	GPIOPinWrite(WSPort, WSPin, 0x1); //Sends a logical '1' to WSPin
	for (i = 0; i<delay; i++)		
	{
		SysTickWait(56); // wait 0.7us    56 Cycles * 0.0125 us =  0.7 us
	}

	GPIOPinWrite(WSPort, WSPin, 0x0); //Sends a logical '0' to WSPin
	for (i = 0; i<delay; i++)
	{
		SysTickWait(48); // wait 0.7us    48 Cycles * 0.0125 us =  0.6 us
	}

}

//Time delay using busy wait.
// The delay parameter is in units of the 80 MHz core clock. (12.5 ns)
void SysTickWait(unsigned long delay)
{
	NVIC_ST_RELOAD_R = delay - 1; // number of counts to wait
	NVIC_ST_CURRENT_R = 0; // any value written to CURRENT clears
	while ((NVIC_ST_CTRL_R & 0x00010000) == 0)
	{
		// wait for count flag
	}
}


//group2

//group3

//group4

//group5

//group6