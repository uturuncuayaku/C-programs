#include <stdio.h>
#include "function_pointer.h"
/**
 * array_iterator - function array iterator
 * @array: pointer int
 * @size: size of array
 * @action: function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int *end = array + size -1;
	
	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
