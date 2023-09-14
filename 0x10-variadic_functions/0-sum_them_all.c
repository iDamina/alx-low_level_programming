#include "variadic_functions.h"

/**
  *sum_them_all - variadic function to sum all numbers
  *
  *@n: the number of last parameter
  *
  *Return: return total sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	/*starting argument */
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);

	return (sum);

}
