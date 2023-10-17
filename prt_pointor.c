#include "main.h"

/**
 * prt_pointor : function that print the adress memory
 * @arg: argument
 * Return: 1;
 */

int prt_pointor(va_list arg)
{
	char *s = "(nil)";
	void *p;
	int i;
	long int a;
	long int b;

	p = va_arg(arg,void *);
	if (p == NULL)
	{
		for(i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('X');
	b = prt_hexa_poi(a);
	return (b + 2);
}
