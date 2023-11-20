#include <stdio.h>

/**
 * main - lowercase alphabets
 *
 * Return: always 0
 */
int main(void)
{
	char a, b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
