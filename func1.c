#include "main.h"

/**
 * prt_flag - Handle flag characters
 * @flag: the flag
 * Return: the length of a string
 */

int prt_flag(va_list flag)
{
	char *a;
	int len;

	a = va_arg(flag, char *);

	if (*a == ' ')
		len = _putchar(' ');
	else if (*a == '+')
		len = _putchar('+');
	else if (*a == '#')
		if (*(a + 1) == 'o')
			len = _putchar('0');
		else if (*(a + 1) == 'x' || *(a + 1) == 'X')
		{
			len = _putchar('0');
			len += _putchar('x');
		}
	return (len);
}
