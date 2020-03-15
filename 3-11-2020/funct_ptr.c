#include <stdio.h>
/** 
 * funct_ptr - function that prints two numbers
 * @a: integer
 * @b: integer
 * Return: void or none
 */
void funct_ptr(int a, int b)
{
	printf("Sum of two parameters %d & %d:%d\n",a,b, a + b);
}
/**
 * main - function to test our funct_ptr
 * @void: no arguments passed from command line
 * Return: 0 on success
 */
int main(void)
{
	/**
	 * declare fptr as pointer to function with
	 * two parameters that are type integer
	 **/
	void (*fptr)(int,int) = funct_ptr;
	funct_ptr(10,10);

	return (0);
}
