#include <stdio.h>
/**
  *main - starting of the program
  *Description: 'program that prints all the numbers of
  *base 16 in lowercase
  *Return: returns 0 as success
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar (m);
	}
	putchar ('\n');
	return (0);

}
