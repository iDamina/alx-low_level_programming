#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
   *main - main block here
   *Description:'Get a random number and print the number
   *and if the number is negative, positive or zero'
   *Return: success if 0 is true
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
