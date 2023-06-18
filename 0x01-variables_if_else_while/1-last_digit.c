#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - main program starts here
  *Description: 'This program will assign a random number
  *and prints the last digit of the number
  *Return: always 0 at then end of the program
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else if (ld == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ld);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
