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
//group1
//SetupPins() initialize pin to output, store port and pin number in a private global variable named WSPort and WSPin
//.SendOne() send a logical '1' as described in timing diagram. Use the private global variable to determine port and location.

//group2
// 9/13/17
//Given Task: SetupPins() and SendZero()
//Members: Jay Douglas, Lakeysha Green, Nicholas Hunt, Thomas Weeks

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

#include "project.h"
#include <stdio.h>
#include <stdint.h>

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
// Define and set global variables
// “\0” defines a string
char ProgramPort[]=”GPIO_PORTF_BASE\0”;
char ProgramPin[]=”GPIO_PIN_3\0”;

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
//create and define functions
// switch case would be complicated
//must research a pin setup command thats char&int input based 
Void SetupPins(char portIN, int pinIN)
	{
	// Modify strings to new port and pin
// char array elements are in ASCII
 
	ProgramPort[9]=portIN;
	char temp=pinIN+'0';	// converts int to char in ASCII table
	ProgramPin[9]=temp;
	// Modified arrays are globals and can be reff later

	// Enable the GPIO pin for the LED (PF3). Set the direction as output, and
	// enable the GPIO pin for digital function.
	// expects two strings. They were created in globals and modified above
	GPIOPinTypeGPIOOutput(ProgramPort,ProgramPin);

}
Void SendZero()
	{
		// “\0” defines a string
// use the global variables that are uptodate
		GPIOPinWrite(ProgramPort, ProgramPin, 0x0);
	}
void SetupHardware()// set up hardware routine
{
UartSetup();
}

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

Void main()
{
	
	Int request=NULL;
SetupHardware();// set up hardware function  

	//request and set port
	printf(“Please enter desired port:\n”);
	scanf(“%s”, &ProgramPort);

	// request and set pin
	printf(“\n Please enter desired pin:\n”);
	scanf(“%d”, &ProgramPin);

	//Now that global variables are set, pass them to SetupPins()
	SetupPins(ProgramPort, ProgramPin);

	//Pins are set up
	// request if pins should be turned off
	printf(“Would you like to turn the pin off? 1=Yes, Anything else=No”);
	scanf(“%d”, &request);
	
	if(request==1)
	{
		SendZero();
	}
	Else
	{

	}
	
	//end Main
}




//group3

//group4

//group5

//group6

