#include "main.h"
/**
  *_pow_recursion - function to print power
  *
  *@x: integer to raise
  *@y: the power raised to
  *
  *Return: return the raised power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0) /*first condition to check and return*/
		return (-1);
	if (y == 0) /* base case */
		return (1);
	/*perform the recursion of power*/
	return (x * _pow_recursion(x, (y - 1)));
}
