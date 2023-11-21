#include <stdio.h>
/**
 * main - my combination
 *
 * Return: always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
		b = '0';
	}
	a++;
	putchar('\n');
	return (0);

}
