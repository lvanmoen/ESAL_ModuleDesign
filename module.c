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

// Static glboal variables for port and pin
static uint8_t WSPort;
static uint8_t WSPin;

// Use an enum for port names to make it more friendly to the service layer.
typedef enum {PORTA, PORTB, PORTC, PORTD, PORTE, PORTF} Port_t;
	
// Take 
void SetupPins(Port_t port, uint8_t pin)
{
	uint32_t base;
	uint8_t pinFlag;
	
	// Save parameters to private globals.
	WSPort = portNumber;
	WSPin = pin;
	
	// Translate the service layer port name to a HAL port base address.
	switch (port) {
		case PORTA:
			base = GPIO_PORTA_BASE;
			break;
		case PORTB:
			base = GPIO_PORTB_BASE;
			break;
		case PORTC:
			base = GPIO_PORTC_BASE;
			break;
		case PORTD:
			base = GPIO_PORTD_BASE;
			break;
		case PORTE:
			base = GPIO_PORTE_BASE;
			break;
		case PORTF:
			base = GPIO_PORTF_BASE;
			break;
	
		default:
		
	}
	
	// Shift 0x1 over by the pin number to get proper pin flag.
	pinFlag = 0x1 << pin;
	
	// Call the Tiva library to configure the pin for output.
	GPIOPinTypeGPIOOutput(base, pinFlag)
	
}

void SendLatch(void)
{
	
	
	
}






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

//group5

//group6
