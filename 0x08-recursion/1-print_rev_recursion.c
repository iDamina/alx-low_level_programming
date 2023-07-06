#include "main.h"
/**
  *_print_rev_recursion - to print strings in reverse recursively
  *
  *@s: input of type char
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
