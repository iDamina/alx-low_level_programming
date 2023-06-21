#include "main.h"
/**
  *_abs - computes an absolute value of an integer
  *
  *@i: inputs number as an integer
  *
  *Return: Always returns 0 as true
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	return (i * -1);
}
