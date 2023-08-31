#include "main.h"
/**
  *_strlen_recursion - returns string length
  *
  *@s: the string to return
  *
  *Return: the length of string
  */
int _strlen_recursion(char *s)
{
	/*define a variable to count the length*/
	int len = 0;

	/*check if length is not empty then count it*/
	if (*s != 0)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
