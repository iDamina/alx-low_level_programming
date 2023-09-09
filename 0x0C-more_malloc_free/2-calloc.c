#include "main.h"
#include <stdlib.h>
/**
  *_calloc - function to allocate memory for an array
  *
  *@nmemb: number of elements to be allocated
  *@size: the size of elements
  *
  *Return: allocated memory or null
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int a;

	/* checking first condition (if nmemb or size = 0) */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* assign memory to the array */
	c = malloc(nmemb * size);

	/* checking second condition (if malloc fails) */
	if (c == 0)
		return (NULL);

	/*but if malloc succeeds */
	for (a = 0; a < (nmemb * size); a++)
		c[a] = 0;

	return (c);
}
