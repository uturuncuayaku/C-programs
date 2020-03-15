#include "practice.h"

int pivot_Index(int *n, int len)
{
	int i;
	int total = 0, left_sum = 0;

	for (i = 0; i < len; i++)
		total += n[i];
	
	for (i = 0;  i < len; i++)
	{
		if ( i != 0)
			left_sum += n[i -1];
		if ( total - left_sum - n[i] == left_sum)
			return (i);
	}

	return (-1);
}

int main(void)
{
	int *number_array = { 1,2,3,4,2,1 }; 

	printf("Pivot Index of an array of numbers: %d\n",
			pivot_Index( *number_array));

	return (0);
}
