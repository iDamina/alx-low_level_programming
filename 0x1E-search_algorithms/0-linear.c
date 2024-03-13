#include "search_algos.h"
/**
  * linear_search - search the first ocurrency of a value in the array
  *@array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
