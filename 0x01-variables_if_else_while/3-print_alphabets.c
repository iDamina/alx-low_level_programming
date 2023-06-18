#include <stdio.h>
/**
 *main - start of the program
  *Description: 'program to print alphabets in upper and lower case
  *Return: success as it returns 0
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);

}
