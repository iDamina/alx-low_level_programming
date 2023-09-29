#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: The unsigned long integer
 * @index: the index of the bit to retrieve (from 0)
 * Return: the value of bit at specified index, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*checking the size of index if its not out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Return -1 if the index is out of range */
	/* shift to the desired bit and attach 1 to retrieve its value */
	return ((n >> index) & 1);
}
