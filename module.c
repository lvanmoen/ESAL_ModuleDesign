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
#include <gpio.h>

//
// Helper Macros
//

// Creates the pin mask bit from a pin number.
#define PinBit(pinNumber)			(0x1 << pinNumber)

// Lookup up the port's base address based on its PortName_t value
#define PortBase(portName)		PortBaseMap[portName]

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

// Private global variables to store port and pin
static uint8_t WSPort;
static uint8_t WSPin;

// This array maps a PortName_t value to its corresponding GPIO base address.
//	See SetupPins() for an example.  Note that this array is marked 'const' and 
//	should therefore be stored in Flash (ROM).
static const uint32_t PortBaseMap[] = { 
	GPIO_PORTA_BASE,
	GPIO_PORTB_BASE,
	GPIO_PORTC_BASE,
	GPIO_PORTD_BASE,
	GPIO_PORTE_BASE,
	GPIO_PORTF_BASE
};
	

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

// Take a port name and pin number and configure it for digital output.
void SetupPins(PortName_t port, uint8_t pinNumber)
{
	uint32_t base;
	uint8_t pinBit;
	
	// Save port and pin parameters to private globals.
	WSPort = port;
	WSPin = pin;
	
	// Translate the service layer port name to a HAL port base address.
	base = PortBase(port);
	
	// Get the proper pin bit flag based on the pin number. 
	pinBit = PinBit(pinNumber);
	
	// Call the Tiva library to configure the port/pin for output.
	GPIOPinTypeGPIOOutput(base, pinBit)
	
}

void SendLatch(void)
{
	uint32_t base;
	uint8_t pinBit;
	
	base = PortBase(WSPort);
	
	pinBit = PinBit(WSPin);
	
	// Configure and enable the SysTick counter.
			
			// Need to be 50us.  12.5ns * NumTicks = 50us
			SysTickPeriodSet(4000);
	
	 		// Force the SysTick counter to reload immediately.  
			// Any write to this register
			// clears the SysTick counter to 0 and
			// causes a reload with the ui32Period supplied here on the
			// next clock after SysTick is enabled.
	 		NVIC_ST_CURRENT = 0; 
	
	  //Set output LOW
	  // We assume that the output is high already
			GPIOPinWrite(base, pinBit, 0x0);
		
			SysTickEnable();
	
		// 	Delay for 50us...
		// 	Set Output HIGH
			GPIOPinWrite(base, pinBit, 0x1);
	
}



//group4

//group5

//group6