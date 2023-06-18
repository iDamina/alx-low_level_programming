#include <stdio.h>
/**
  *main - program starts here
  *Description: 'prints the lowercase alphabet in reverse'
  *Return: returns 0 as true always
  */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);

}
