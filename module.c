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
// 9/13/17
//Given Task: SetupPins() and SendZero()

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

