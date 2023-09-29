#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted unsigned int or 0 if b is not a valid binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i;

	/*checking if *b is null*/
	if (b == NULL)
		return (0);

	/* to calculate the length of the string */
	for (i = 0; b[i] != '\0'; i++)
		;

	/* processing the string from right to left now */
	for (i--; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			/* If the character is '0'(already 0) do nothing */
		}
		else if (b[i] == '1')
		{
			/* If the character is '1', add the value to result */
			result = result + base;
		}
		else
		{
			return (0);
		}

		/* Multiply the base by 2 for the next binary digit (bit) */
		base = base * 2;

	}

	return (result);
}
