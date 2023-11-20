#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
