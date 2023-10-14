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

int ptr_dtr(va_list worf)
{
	char *str;
	int len;
	int i;

	str = va_arg(val, char *);
	
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


int _printf(const char *format, ...)
{

}
