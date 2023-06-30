#include "main.h"
/**
  *_strncpy - function that copies strings
  *@dest: destination parameter of type character
  *@src: source parameter of type character
  *@n: input value
  *Return: return dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
