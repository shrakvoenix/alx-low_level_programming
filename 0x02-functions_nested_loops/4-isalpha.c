#include "main.h"

/**
 *  _isalpha - Write a function that checks for alphabetic character
 *
 *  Return: 1, Otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
