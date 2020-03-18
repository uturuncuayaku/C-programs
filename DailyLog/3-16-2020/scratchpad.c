
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
	/*** 
	 * Problem encountered with this problem-
	 * // char *test1 = "my,string"
	 * Is in read only memory with a pointer to first character of "my.."
	 * char *test1 will make any writing operation on this memory illegal.
	 * So, in order for us to make it work we must use 
	 * // test1[] = "string,delimited"; 
	 * strtok attempts to modify the string and therefore gives us our
	 * segmentation fault when we try to use a character pointer to
	 * parse the string of commas with the strtok function.
	 * Now, we are able to access memory using array index or setting
	 * the value to anything else, thereby making it a mutable array.
	 * The brackets signify to the compiler we will need space in the
	 * initialized data section and stack of our computer.
	 * Initialization- an array of character type may be initialized by
	 * a character string literal, optionally enclosed in braces. Successive
	 * characters of the character string literal (include the termination null
	 * character if there is room or if the array is of unknown size)
	 * initialize the elements of the array.
	 * In translation its the same as doing this
	 * // char test1[] = {'r','u','n',',',b','a','r','n',',',...};
	 * // static char __unnamed[] = "abc";
	 * // char *c = __unnamed;
	 * // __unnamed is magic because modifying it gives UB
	 */

	char test1[] = "run,barn,yellow,barracuda,shark,fish,swim";
	char *test2 = "fishes,sam,gollum,sauron,frodo,balrog";
	char *test3 = "rUnNiNg ,swimming, eating,biking, climbing";
	char *test4 = "america,united,kingdom,mexico,canada,AUSTRalia";
/*	
	char *tokens = strtok(test1, ",");
	while (tokens != NULL)
	{
		printf("%s\n", tokens);
		tokens = strtok(NULL, ",");
	}

	while (*test2 != 0)
		putchar(*test2++);
	putchar('\n');

	while(*test3++)
		putchar(*test3);
	putchar('\n');
*/	
