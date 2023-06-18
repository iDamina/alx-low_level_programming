#include <stdio.h>
/**
  *main - program starts here
  *Description: 'program that prints all possible combinations
  *of single digit numbers
  *Return: returns 0 as success
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
		if (n == 57)
		{
			continue;
		} else
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
