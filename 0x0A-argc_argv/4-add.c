#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 as success
  */
int main(int argc, char *argv[])
{
	int i, n;

	int sum = 0;
	char *flag;

	/* if no number is passed to the program*/
	/* print 0 followed by a newline*/
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	i = 1; /* initializing i*/

	while (argv[i])
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + n;

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
