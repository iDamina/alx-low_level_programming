#include "main.h"
/**
  *_print_rev_recursion - print string in reverse
  *
  *@s: the string to print in reverse
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
