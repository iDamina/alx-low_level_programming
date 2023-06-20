#include "main.h"
/**
  *_isalpha - starts checking if its alphabet
  *
  *@c: 'checks for alphabetic character in ASCII code
  *
  *Return: returns 1 if its letters while 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 66 && c <= 90))
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
