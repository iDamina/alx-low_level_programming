#include "main.h"
#include <stdio.h>
/**
 *_puts - start of the program
 *@s: input character
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

