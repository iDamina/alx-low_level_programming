#include "main.h"
/**
  *reverse_array - a function that reverses the array of a character
  *@a: first array
  *@n: number of elements in an array
  *Return: void as return
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
