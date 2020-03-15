/**
 * Find element in array based on function called by pointer
 * int_index - search for an integer
 * @array: array to search through
 * @size: size of an array
 * @cmp: compare function to use
 * Return: index of first element that cmp does not return 0,
 * -1 if no elements are reach or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	
	while (i < size)
	{
		if (cmp(array[i])
			return (i);
		i++
	}
	return (-1);
}
