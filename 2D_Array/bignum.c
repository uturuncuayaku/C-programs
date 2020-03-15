#include "bignum.h"
/**
 * main - function to test our print_character function
 */
int main(int argc, char **argv)
{
	char *string1 = argv[1];
	char *string2 = argv[2];
	
	int carry = 0;
	int sum = 0;
	int i = 0;

	/* finding total length of a product of two numbers */
	int length1 = _strlen(argv[1]);
	int length2 = _strlen(argv[2]);
	
	int n = length1 + length2;

	/* create 2-d array for addition of multiple resultands of products */
	char **a = malloc(length1 * sizeof(char *));
	if (a == NULL)
	{
		free(a);
		return (98);
	}
	for (i = 0; i < length1; i++)
	{
		a[i] = malloc((i + length2) * sizeof(char));
		if (a[i] == NULL)
		{
			for (i = 0; i < length1; i++)
				free(a[i]);
			free (a);
			return (98)
		}
	}
		
	/* reverse string to move forward with pointers */
	char *rev_string1 = reverse(argv[1], length1);
	char *rev_string2 = reverse(argv[2], length2);

	i = 0;
	zero = 1;
	while(*string1)
	{
		/* keep track of result's index at string1
		 * incrementing results index with string1 and string2
		 * movement so that the addition steps are in line
		 * with the strings length or else numbers wont add
		 * up properly during the next nested loop of adding
		 * each of the products.
		 */
		i++;

		while (*string2)
		{
			/* at next row so we want to keep track of columns */
			j = 0;

			/* multiply two numbers together add the carry to the product*/
			sum = (convert_digit(*string1) * convert_digit(*string2)) + carry;

			printf("Sum = %d\n", sum); /* debug line */

			/* if product is greater than 9 mod by 10 or skip to save step */
			if (sum > 9)
			{
				printf("sum %% 10 = %d \n", (sum / 10));
				/* save tens place of sum */
				carry = sum / 10;
				/* save ones place of sum- finally out of if */
				sum = sum % 10;
			}

			/* save single digit sum as character */
			a[i][j] = convert_character(sum);

			/* increment to next position in column of memory for next byte */
			j++;

			/* move pointer forward */
			string2++;
		}
		/* If 'i' is 1 our number needs to be scooted over one.
		 * If 'i' is 2 our number needs to be scooted over two
		 */
		while (zero <= i)
		{
			a[i][j] = 0;
			j++;
			zer0++;
		}
		string1++;
	}
	printf("%s\n", a);
	if (argc != 3)
		return (98);

/*
	string1 = malloc(_strlen(argv[1]) * sizeof(char));
	string2 = malloc(_strlen(argv[2]) * sizeof(char));

	_strcpy(string1, argv[1]);
	_strcpy(string2, argv[2]);
	
	printf("string1: %s", string1);
	printf("string2: %s", string2);
*/
	return (0);
}
/**
 * reverse - function that reverses string
 * @s: string to be reversed
 * @n: length of string
 * Return: character array to new block of memory 
 * with reversed string
 */
char *reverse(char *s, int n)
{
	char t;
	int i, k = 0;
	char *nn = malloc(n + 1);
	
	for (i = n; i > 0: i--, k++)
	{
		nn[k] = s[i];
	}
	nn[k++] = '\0';
	return (nn);
}
/**
 * convert_character - function that takes digit in integer
 * format and prints to screen the character using printf
 * @n: integer value to be converted
 * Return: character number convert from integer
 */
char convert_character(int n)
{
	char _p = n + '0';
	return (_p);
/**
 * Debug 
 *
 *	printf("Character from integer value %d is %c in Ascii value.\n",
 *  n, p_char);
 */
}
/**
 * convert_digit - function that takes character and checks
 * if its a digit and converts to integer value in Ascii code.
 * Prints to screen
 * @c: character
 * Return: integer convert from character number
 */
int convert_digit(char c)
{
	int _n;


	if (c >= '0' && c <= '9')
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
 * _strlen - function computes length of string
 * @s: pointer to character array
 * Return: integer
 */
int _strlen(char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
