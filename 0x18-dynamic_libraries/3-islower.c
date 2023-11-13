#include "main.h"
/**
  *_islower - this function returns 1 if our input c is lowercase
  *while 0 if not
  *@c: 'function to check if a character is lowercase or not'
  *Return: returns 1 for uppercase and 0 for lowercase character
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	{
		return (0);
	}
	_putchar('\n');
}
