#include "main.h"

/**
 * reverse_str - reverse a string
 * @s: string input
 * Return: length of the string
 */

int reverse_str(char *s)
{
	int i = 0;
	int len = 0;
	int retrn;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	retrn = len;

	while (len >= 1)
	{
		_putchar(s[len - 1]);
		len -= 1;
	}

	return (retrn);
}
