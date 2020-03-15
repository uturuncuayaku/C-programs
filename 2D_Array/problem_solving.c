#include <stdio.h>
int main(void)
{
	int i, j;
	j = 10;
	for (i = 1; i <= 5; ++i)
	{	
		printf("%d %d\n", i, j);
		j -= 2;
	}
}
