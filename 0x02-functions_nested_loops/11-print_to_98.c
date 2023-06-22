#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - to print natural numbers to 98
  *
  *@n: the number to start printing from
  *
  *Return: always 0 as success
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d, ", n);
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d ,", n);
			}
	}
}
