#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - adds two strings
 * @n1: the string to be added
 * @n2: the second set of numbers to be added
 * @size_r: buffer
 * Return: character array
 */
char *infinite_add(char *first, char *second, char *buffer, int size_r)
{
	int num, j, i, k, m, l, sum, carry, num1, num2;
	i = j = l = k = carry = m = 0;
	while (first[i] != '\0')
		i++;
	while (second[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		num1 = num2 = 0;
		if (i >= 0)
			num1  = first[i--] - '0';
		if (j >= 0)
			num2 = second[j--] - '0';
		sum = num1 + num2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum =- 10;
		}
		else
			carry = 0;
		buffer[k++] = sum + '0';
	}
	if (carry == 1)
		buffer[k++] = 1 + '0';
	m = k;
	k -= 1;
	for (l = 0; l < k; l++, k--)
	{
		num = buffer[k];
		buffer[k] = buffer[l];
		buffer[l] = num;
	}
	buffer[m] = '\0';
	return (buffer);
}
