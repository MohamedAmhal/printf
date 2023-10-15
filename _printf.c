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

int prt_str(va_list word)
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
 * _prt_int - this is the function print integer
 * @nmb: the variadic variable
 * Return: the lenght(int)
 */

int prt_int(va_list nmb)
{
	int a = va_arg(nmb,int);
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
		while (x >0)
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

/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: other arguments
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	choose c[] = {
		{"%c", prt_char}, {"%s", prt_str}, {"%%", prt_pers}, {"%i", prt_int}
	};

	va_list param;
	int len = 0;
	int i = 0;
	int j = 0;

	va_start(param, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (c[j].cle[0] == format[i] && c[j].cle[1] == format[i + 1])
			{
				len = len + c[j].f(param);
				i = i + 2;
			}
			j--;
		}
	}


	va_end(param);
	return (len);
}
