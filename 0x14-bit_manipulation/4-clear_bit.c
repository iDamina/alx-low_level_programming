#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the unsigned long integer
 * @index: the index of the bit to clear (starting from 0)
 * Return: 1 if successful, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Return -1 if the index is out of range */

	/*clear the bit at the specified index*/
	*n = *n & (~(1ul << index));

	return (1);  /* Return 1 to indicate success*/
}
