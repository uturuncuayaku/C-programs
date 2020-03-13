#include "alpaca_header.h"
/**
 *  alpaca - structure for alpaca
 *  ^ Starts our identifier
 *  Within a struct namespace
 *  We are now able to use it
 *  By defining variables or function arguments
 * 
 *  We can define a type of the argument as struct alpaca
 *  allowing us to define a new alpaca without
 *  specifying its struct type alias. In essence you typedef
 *  to avoid the need to qualify with struct.
 *  
 */
struct alpaca
{
	char *name;
	char *microchip;
	float age;
	char *color;
};
typedef struct alp alpaca;
/** 
 *	Main function that prints our newly created structure data type
 *  Return: 0 on success
 */  
int main(void)
{
	alp.name = "Misty";
	alp.microchip = "00000000000000";
	alp.age = 10;
	alp.color = "Rosegrey";
	
	printf("My name is %s and my tags are on my ear and they read, %s \ 
			and I'm %.1f years old and my fleece is %s\n", alp.name,
			alp.microchip, alp.age, alp.color);
	
	return (0);
}
