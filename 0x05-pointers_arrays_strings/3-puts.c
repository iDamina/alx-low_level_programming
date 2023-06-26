#include "main.h"
/**
  *_puts - function that prints a string followed by new line
  *
  *@str: string to b printed
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
