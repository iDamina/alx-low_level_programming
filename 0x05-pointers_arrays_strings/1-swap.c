#include "main.h"
/**
  *swap_int - this swaps the integer
  *
  *@a: first integer
  *@b: second integer
  *
  *Return: returns the value
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
