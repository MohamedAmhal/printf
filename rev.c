#include "main.h"

/**
 * reverse_str - reverse a string
 * @s: string input
 */

void reverse_str(char *s)
{
	int i = 0;
	int len = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	len--;

	while (i <= (len / 2))
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
		i++;
	}
}
