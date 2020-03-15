#include <stdarg.h>
#include <stdio.h>
/** 
 * sum_all - sums all integers
 * @n: number of integers
 * @...: integers
 * Return: sum
 */
int sum_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);
	return (sum);
}
