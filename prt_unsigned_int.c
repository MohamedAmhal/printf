#include "main.h"

/**
 * prt_unsigned_int - this a function print a unsigned int
 * @nmb: the variable
 * Return: the length
 */

int prt_unsigned_int(va_list nmb)
{
	unsigned int a = va_arg(nmb, unsigned int);
	int number, digit;
	int end = a % 10;
	int x = 1;
	int i = 1;

	a = a / 10;
	number = a;

	if (end < 0)
	{
	_putchar('-');
	number = -number;
	a = -a;
	end = -end;
	i++;
	}
	if (number > 0)
	{
	while (number / 10 != 0)
	{
		x = x * 10;
		number = number / 10;
	}
	number = a;
	while (x > 0)
	{
		digit = number / x;
		_putchar(digit + '0');
		number = number - (digit * x);
		x = x / 10;
		i++;
	}
	}
	_putchar(end + '0');
	return (i);
}
