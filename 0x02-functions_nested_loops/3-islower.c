#include "main.h"

/**
 * _islower - check lower case
 *
 * Return: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	char d;
	int i = 0;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
		{
			i = 1;
		}
	}
	return (i);
}
