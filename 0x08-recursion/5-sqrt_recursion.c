#include "main.h"
int sqrroot(int a, int b);

/**
  *_sqrt_recursion - gets natural square root of a number
  *
  *@n: number to get square root
  *
  *Return: square root
  */
int _sqrt_recursion(int n)
{
	/* returns square root through recursion*/
	return (sqrroot(n, 1));
}

/**
  *sqrroot - to get the actual square root
  *
  *@a: first number
  *@b: second number
  *Return: square root
  */
int sqrroot(int a, int b)
{
	if (b * b > a)/* checks n returns -1*/
		return (-1);
	else if (b * b == a)/* returns b */
		return (b);
	return (sqrroot(a, b + 1));
}
