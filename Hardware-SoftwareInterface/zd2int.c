#include <stdio.h>
int main (void)
{
	typedef int zip_digit[5];
	zip_digit cmu = {1,5,2,1,3};
	zip_digit uw = {9,8,1,9,5};
	zip_digit ucb = {9,4,7,2,0};
	
	zip_digit sea[4] = 
	{	{9,8,1,9,5},
		{9,8,1,0,5},
		{9,8,1,0,3},
		{9,8,1,1,5}
	}:


	return (0);
}
void print_sea(zip_digit z[4])
{
	printf("%p\n", z[3][3]);
}
int zd2int(zip_digit z)
{
	int i;
	int zip =0;
	for (i = 0; i < 5; i++)
	{
		zip = 10 * zip + z[i];
	}
	return (zip);
}

int zd2int_v2(zip_digit z)
{
	int zi = 0;
	int *zend = z + 4;

	do {
		zi = 10 * zi + *z;
		z++;
	} while (z <= zend);
	return (zi);
}

int *get_sea_zip(int index)
{
	return sea[index];
}
