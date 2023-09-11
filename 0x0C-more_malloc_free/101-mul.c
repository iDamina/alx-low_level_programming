#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiplies two positive numbers
 * @argc: n no of arguments
 * @argv: arguments
 * Return: integer
 **/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	/* checking condition to print Error n an exit with 98 */

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* another check */

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	/* adding the second and third value after mul */
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%ld\n", mul);
	return (0);
}
