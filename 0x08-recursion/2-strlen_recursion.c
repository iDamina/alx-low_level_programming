#include "main.h"
/**
  *_strlen_recursion - function that returns the length of a string
  *@s: the string to be measured
  *Return: returns the length of the string
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
