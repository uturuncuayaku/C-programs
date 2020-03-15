#include <stdio.h>
#include "variadic_func.h"

int main(void)
{
	int sum;

	sum = sum_all(1, 10, 100);
	printf("%d\n", sum);
	sum = sum_all(4, 100, 101, 110, 1001);
	printf("%d\n", sum);
	return (0);
}
