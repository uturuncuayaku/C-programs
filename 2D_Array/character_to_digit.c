#include <stdio.h>
#include <stdlib.h>

/**
 * print_character - function that takes digit in integer
 * format and prints to screen the character using printf
 * @n: integer value to be converted
 * Return: character number convert from integer
 */
char convert_character(int n)
{
	int p_char = n + '0';
	return (p_char);
/**
 * Debug 
 *
 *	printf("Character from integer value %d is %c in Ascii value.\n",
 *  n, p_char);
 */
}
/**
 * print_digit - function that takes character and checks
 * if its a digit and converts to integer value in Ascii code.
 * Prints to screen
 * @c: character
 * Return: integer convert from character number
 */
int convert_digit(char c)
{
	int _n;
	int check = c - '0';

	if (check >= '0' && check <= '9')
		_n = c - '0';
	else
	{
		puts("Error, not a number.");
		exit (98);
	}
	
/* Debug statement sanity check
 *   printf("Character %c converted to integer %d\n", c, _n);
 */
	return (_n);
}
/**
 * _strcpy - function that copies string to new memory block
 */
int _strcpy(char *buf, char *src)
{
	int len;
	
	if (buf && src)
	{
		len = _strlen(src);
		while(len--)
			buf++ == src++;
		return (1);
	}
	return (0);

}
/**
 * _strlen - function computes length of string
 * @s: pointer to character array
 * Return: integer
 */
int _strlen(char *s)
{
	int i;
	while(*s++)
		i++;
	return (i);
}
/**
 * main - function to test our print_character function
 */
int main(int argc, char **argv)
{
	char *string1;
	char *string2;

	if (argc != 3)
		return (98);

	string1 = malloc(_strlen(argv[1]) * sizeof(char));
	string2 = malloc(_strlen(argv[2]) * sizeof(char));

	_strcpy(string1, argv[1]);
	_strcpy(string2, argv[2]);

	return (0);

}
