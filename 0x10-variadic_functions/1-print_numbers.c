#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - print each number with separator, followed by a newline
 *@separator: string to be printed between numbers
 *@n: number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == 0)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
