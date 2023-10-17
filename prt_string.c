#include "main.h"

/**
 * prt_string - this the function that print a string
 * @str: variable
 * Return: the lenght
 */

int prt_string(va_list str)
{
	int i;
	int len;
	char *t;

	t = va_arg(str, char *);
	if (t == NULL)
	{
		t = "(null)";
		len = _strlen(t);
		for (i = 0; i < len; i++)
			_putchar(t[i]);
		return (len);
	}
	else
	{
		len = _strlen(t);
		for (i = 0; i < len; i++)
			_putchar(t[i]);
		return (len);
	}
}
