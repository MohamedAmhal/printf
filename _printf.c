#include "main.h"

/**
 * c_specifiers - check the custom conversion specifiers
 * @arg: arguments
 * @sp: char specifier
 * @len: length of the specifier or -1 if error
 */

void c_specifiers(va_list arg, char sp, int *len)
{
	if (sp == '%')
	{
		(*len) += prt_pers();
	}
	else if (sp == 'c')
		(*len) += prt_char(arg);
	else if (sp == 's')
		(*len) += prt_str(arg);
	else if (sp == 'i')
		(*len) += prt_int(arg);
	else if (sp == 'd')
		(*len) += prt_dec(arg);
	else if (sp == 'b')
		(*len) += prt_binary(arg);
}


/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: other arguments
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list param;
	int len = 0;
	int i = 0;

	va_start(param, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			c_specifiers(param, format[i], &len);
		}
		else
			len += _putchar(format[i]);
		i++;
	}


	va_end(param);
	return (len);
}
