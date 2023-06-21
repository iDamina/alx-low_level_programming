#include "main.h"
/**
  *print_sign - prints the sign of a number
  *
  *@n: the input number n as an integer
  *
  *Return: returns 1 if greater than 0. 0 as zero
  *and -1 when less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
