#include "main.h"

/**
 * print_alphabet - my alphabets
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
