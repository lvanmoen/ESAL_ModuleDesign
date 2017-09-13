
//only insert code after your group number
//descriptions************

//group1

/*********************************************************************************************************************************
**
** Module Name:   module.h
**
** Module Description: Header file for the variables and functions unsed for project.
**
**********************************************************************************************************************************
**
** Author(s):		Kodey Boreo,
** Creation Date:   11-Sep-2017
**
**********************************************************************************************************************************/


//group2

//group3

//group4

//group5

//group6



//includes************

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

//group1




//group2

//group3

//group4
#include <stdbool.h>
#include <stdint.h>
#include "sysctl.h"
#include "hw_memmap.h"
#include "gpio.h"
#include "uart.h"
#include "../inc/tm4c123gh6pm.h"
#include "hw_gpio.h"
#include "hw_types.h"

//group5

//group6


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


//function prototypes ************

//group1

void SetupPins(int WSPort, int WSPin); //Function that inititalizes pin to output, store ports and pin number in a variable.
void SendOne(void);  //Sends a logical '1'. 
void SysTickWait(unsigned long delay)  //Time delay Function

//group2

//group3

//group4

Setup_Pins(uint8_t, uint8_t);
Send_Latch();


//group5

//group6





























