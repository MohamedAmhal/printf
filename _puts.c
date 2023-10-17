#include "main.h"

/**
 * _puts - prints a given string with new line
 * @s: string input
 * Return: lenght of characters printed
 */

int _puts(char *s)
{
	int len = 0;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(str[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
