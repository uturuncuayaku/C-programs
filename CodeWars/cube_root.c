#include <stdio.h>
#include <math.h>
/**
 * findNb - Entry point to finding the cube root of
 * n cubes piled on top of each other
 * @m: The volume of the total cubes
 * Return: i if success, otherwise -1
 */
long long findNb(long long m)
{
	for (long long i = 0; i < cbrt(m); i++)
	{
		if (pow(i * (i + 1) / 2, 2) ){
				return (i);
		}
	}
	return (-1);
}

/**
 * findNb_V2 - Entry point to finding the cube root of
 * n cubes piled on top of each other
 * @m: The volume of the total cubes
 * Return: i if success, otherwise -1
 */
long long findNb_V2(long long m)
{
	long long volume = 0;
	long long count = 0;

	while (v < m)
	{
		count++;
		volume += pow(c,3);
	}
	return v == m ? c : -1;
}
