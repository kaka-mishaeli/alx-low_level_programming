#include "main.h"
/**
 * print_alphabet_x10 - print 10 times alpabet
 *
 */
void print_alphabet_x10(void)
{
	char a, b;

	a = 0;
	b = 'a';

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
