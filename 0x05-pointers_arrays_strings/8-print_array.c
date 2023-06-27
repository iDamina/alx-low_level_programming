#include "main.h"
#include <stdio.h>
/**
  *print_array - printing array
  *@a: first integer
  *@n: n elements
  *Return: returns the value
  */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != n - 1)
			printf(", ");
	}
	printf("\n");
}
