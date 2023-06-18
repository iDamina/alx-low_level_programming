#include <stdio.h>
/**
  *main - starts the program
  *Description: 'program to print alphabet in lowercase excluding letters
  *q and e
  *Return: returns 0 as success always
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);

}
