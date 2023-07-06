#include "main.h"
/**
  *_puts_recursion - function like puts() but works recursively
  *
  *@s: input value of type char
  *Return: returns 0 as success
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
