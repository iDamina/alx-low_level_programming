#include <stdio.h>
#include <stdlib.h>
/**
  *main - multiples of two numbers
  *@argc: argument counter
  *@argv: argument vector
  *Return: return 0 as success
  */
int main(int argc, char *argv[])
{
	int x, y;

	/* checking if number is more than 2*/
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	/* assign the second argument to x*/
	x = atoi(argv[1]);
	/* assign the third number to y */
	y = atoi(argv[2]);
	/* do the multiplication and print it out*/
	printf("%d\n", x * y);

	/* return value at the end*/
	return (0);
}
