#include "main.h"
/**
  *puts2 - prints one character out of two characters
  *
  *@str: this is the input
  *
  *Return: prints the value
  */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
