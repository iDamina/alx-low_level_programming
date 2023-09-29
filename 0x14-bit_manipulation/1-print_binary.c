#include "main.h"

/**
 * print_binary - prints binary representation of an unsigned long integer
 * @n: The unsigned long integer to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/*calls the function recursively to print the higher-order bit first*/

		print_binary(n >> 1);
	/* it prints the lowest order bit ('0' or '1') */
	_putchar((n & 1) + '0');
}
