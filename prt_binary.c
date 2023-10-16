#include "main.h"

/**
 * prt_binary - this is a function that print a binary value
 * @bin: variable
 * Return: the length
 */

int prt_binary(va_list bin)
{
	int r = 0;
	int z = 0;
	int i, a = 1;
	int b;
	unsigned int number = va_arg(bin, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & number);
		if (p >> (31 - i))
			z = 1;
		if (z)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			r++;
		}
	}
	if (r == 0)
	{
		r++;
		_putchar('0');
	}
	return (r);
}
