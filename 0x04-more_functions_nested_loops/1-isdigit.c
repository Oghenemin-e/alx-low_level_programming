#include "main.h"

/**
 * _isdigit - checks if a character is digit (0 through 9)
 * @c: character to be tested
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	char c;

	if ((c >= '0') && (c <= 9))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
