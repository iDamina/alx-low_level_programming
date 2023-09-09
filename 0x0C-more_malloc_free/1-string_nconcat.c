#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - concatenating string of n number
  *
  *@s1: first string
  *@s2: second string
  *@n: unsigned integer
  *
  *Return: returns null if the function fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* define integer variables for concatenation*/
	unsigned int x, y, z;
	/* define the main string after concatenation*/
	char *s;

	/*first condition to check*/
	if (s1 == 0)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
			;
	}
	/* second condition to check */
	if (s2 == 0)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));

	if (s == 0)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';

	return (s);
}
