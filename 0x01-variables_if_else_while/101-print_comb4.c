#include <stdio.h>

/**
 * main - my combination function
 *
 * Return: always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || (a == '7' && b == '8' && c != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
		b = '0';
	}
	putchar('\n');
	return (0);
}
