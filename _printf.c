#include "main.h"

/**
 * prt_char - print a char '%c'
 * @word: declaration
 * Return: 1
 */

int prt_char(va_list word)
{
	char loc;

	loc = va_arg(word, int);
	_putchar(loc);
	return (1);
}

/**
 * prt_str - print a string '%s'
 * @word: declaration
 * Return: the length of a string
 */

int prt_dtr(va_list word)
{
	char *str;
	int len;
	int i;

	str = va_arg(word, char *);

	if (!str)
	{
		str = "(null)";
		len = _strlen(str);
	}
	else
	{
		len = _strlen(str);
	}

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}

/**
 * prt_pers - this is a function print %
 * Return: 1
 */

int prt_pers(void)
{
	_putchar(37);
	return (1);
}

/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: other arguments
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{

}
