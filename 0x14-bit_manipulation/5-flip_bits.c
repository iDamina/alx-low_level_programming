#include "main.h"
/**
 * flip_bits - calculates the number of bits needed to flip to get from n to m
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m; /* xor function */

	/* count the number of set bits (1s) in result (XOR) */
	for (int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (result & (1ul << i))
		{
			count++; /* increment count */
		}
	}

	return (count); /* return the count */
}
