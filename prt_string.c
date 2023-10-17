#include "main.h"

/**
 * upper_hex - convert num to hexadecimal lower
 * @num: the vaiable
 * @len: pointer to the string 
 *
 * Return: 0succes, -1 error
 */
int upper_hex(int num, int *len)
{
	int i, size = 2;
	char *hex;
	char *up = "0123456789ABCDEF";

	hex = malloc(size * sizeof(char));
	if (!hex || !up)
	{
		free(hex);
		exit(-1);
	}

	if (num < 16)
	{
		*len += _printf("0%c", up[num]);
		return (0);
	}
	else
	{
		for (i = 0; num != 0; i++)
		{
			hex[i] = up[num % 16];
			hex = _realloc(hex, size * sizeof(char), (size + 1) * sizeof(char));
			size++;
			num /= 16;
		}
	}
	hex[i] = '\0';
	*len += _putchar(hex[i - 1]);
	*len += _putchar(hex[i - 2]);
	free(hex);
	return (0);
}

/**
 * prt_string - prints a string
 * @s: string
 *
 * Return: string length
 */
int prt_string(char *s)
{
	int len, i;
	int c;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			len += _printf("\\x");
			char_to_upper_hex(c, &len);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
