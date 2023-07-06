#include "main.h"
/**
  *_pow_recursion - returns x to power of y
  *@x: value we rise
  *@y: power
  *Return: result of the power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
