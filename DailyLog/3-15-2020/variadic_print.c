#include "variadic_func.h"
void print(const char *d, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int curr;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		curr = va_args(nums,int);
		printnum(curr);
		if (d == NULL || *d == '\0')
			continue;
		if (i != n - 1)
			printf("%s", d);

	}
	putchar('\n');
	va_end(nums);
}
void printnum(int n)
{
	putchar(n);
}
