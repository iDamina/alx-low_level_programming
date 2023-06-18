#include <stdio.h>
/**
  *main - entry point starts here
  *Description: 'using of putchar'
  *Return: 0 as success
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);

}
