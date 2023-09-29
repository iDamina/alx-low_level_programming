#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to unsigned long integer
 * @index: the index of the bit to set (starting with 0)
 * Return: 1 if successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Return -1 if the index is out of range*/

	/*set the bit at the specified index to 1 */
	*n = *n | (1ul << index);

	return (1);  /* Return 1 to indicate success*/
}
