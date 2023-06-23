#include "main.h"
/**
  *_isdigit - checks if a given value is a digit
  *
  *@c: uses the integer c to check the value
  *
  *Return: 1 if is digit and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
