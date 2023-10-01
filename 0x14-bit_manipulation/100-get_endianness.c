#include "main.h"
/**
 *get_endianness - checks endianness
 *
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char *)&value;

	/* Check the value of the least significant byte*/
	if (*ptr == 1)
	{
		/* The least significant byte is 1, indicating little endian*/
		return (1);
	}
	else
	{
		/*The most significant byte is 1, indicating big endian*/
		return (0);
	}
	return (*ptr);
}
