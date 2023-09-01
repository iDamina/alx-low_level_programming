#include "main.h"
int is_prime(int a, int b);

/**
  *is_prime_number - determine if its prime
  *
  *@n: integer n as number
  *
  *Return: 1 as prime and 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/* to define the is_prime function now*/
/**
  *is_prime - to determine if an integer is prime
  *
  *@a: first integer
  *@b: second integer
  *Return: 1 as prime and 0 otherwise
  */
int is_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (is_prime(a, b + 1));
}
