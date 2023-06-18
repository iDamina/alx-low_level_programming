#include <stdio.h>
/**
  *main - program starts here
  *Description: 'program to print single digit numbers
  *of base 10 starting from 0 using putchar only
  *Return: returns 0 as true always
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + 48);
	}
	putchar ('\n');
	return (0);

}
