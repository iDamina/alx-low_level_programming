#include "main.h"
#include <stdlib.h>
/**
  *array_range - creating an array of integers
  *
  *@min: the minimum array
  *@max: the maximum array
  *
  *Return: pointer to the new array
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	/* checking first condition (min > max) */
	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	/*checking the second condition (if malloc fails) */
	if (ptr == 0)
		return (NULL);
	/*creating the array */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
