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

//group2

//group3

//group4
static uint8_t  WSport;
static uint8_t WSPin;


//group5

//group6

//private prototypes ************

//group1

//group2

//group3

//group4

//group5

//group6

//code ************

//group1

//group2

//group3

//group4

Set_Pins(uint8_t WSPin, uint8_t WSPort)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_WSport);// Enable the GPIO port that is used for the on-board
	SetupHardware();
	GPIOPinTypeGPIOOutput(WSPort, WSPin);  //Set pins as outputs
}

SendLatch()
{
	GPIOPinWrite(WSPort, WSPin, 0xFF) //set pin low
	uint16_t i;
	
	for (i = 0; i < 2000; i++)
	{
		__nop(); 
	}

}

//group5

//group6
