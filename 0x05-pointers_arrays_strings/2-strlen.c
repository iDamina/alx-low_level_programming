#include "main.h"
/**
  *_strlen - to print string length
  *
  *@s: string s
  *Return: returns length of string
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
