#include <stdio.h>
#include "main.h"
/**
  *main - this prints the name of the program followed by a newline
  *@argc: argument counter
  *@argv: argument vector
  *
  *Return: 0 as true
  */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
