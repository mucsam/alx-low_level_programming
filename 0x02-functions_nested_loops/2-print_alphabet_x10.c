#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 * the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
