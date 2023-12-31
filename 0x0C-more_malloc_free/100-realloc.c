#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: is the size in bytes of the allocated space for ptr
 *@new_size: the new size
 *Return: returns or allocates new size memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* declerations */
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	/* checking if ptr is Null or the new_size is 0 */
	/* or if new_size is same as the old_size */

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);

	return (p);
}
