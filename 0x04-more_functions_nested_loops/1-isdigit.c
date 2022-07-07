#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: parameter to be checked
 *
 * Return: Return 1 if c is a digit and returns 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
