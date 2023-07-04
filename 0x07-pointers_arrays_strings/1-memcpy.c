#include "main.h"
/**
  *_memcpy - function that copies the memory area
  *@dest: the memory where it is stored
  *@src: source memory it is copied
  *@n: number of bytes
  *Return: returns dest as copied value
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
