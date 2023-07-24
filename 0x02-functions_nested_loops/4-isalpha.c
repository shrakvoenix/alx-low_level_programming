#include "main.h"

/**
 *  _isalpha - Write a function that checks for alphabetic character
 *  @c: the character to be checked
 *  Return: 1, Otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
