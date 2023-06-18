#include <stdio.h>
/**
  *main - starts the program here
  *Description: 'program that prints all single digit numbers
  *of base 10 starting from 0
  *Return: returns 0 as success
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%i", n);
	}
	printf("\n");
	return (0);

}
