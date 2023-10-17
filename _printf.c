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
	else if (sp == 'u')
		(*len) += prt_unsigned_int(arg);
	else if (sp == 'o')
		(*len) += prt_octal(arg);
	else if (sp == 'x')
		(*len) += prt_hexad(arg);
	else if (sp == 'X')
		(*len) += prt_HEXAD(arg);
	else if (sp == 'p')
	{
		void *p = va_arg(arg, void *);

		if (!p)
			(*len) += _puts("(nil)");
		else
		{

			(*len) += _puts("0x");
			prt_hexa_poi((unsigned long)p, len);
		}
	}
	else
		no_c_specifiers(arg, sp, &*len);

}

/**
 * no_c_specifiers - checks a non custom specifiers
 * @arg:arguments
 * @sp: char specifier
 * @len: lenght
 */

void no_c_specifiers(va_list arg, char sp, int *len)
{
	if (sp == 'b')
		(*len) += prt_binary(arg);
	else
	{
		(*len) += _putchar('%');
		(*len) += _putchar(sp);
	}
}

/**
 * flags - checking the flags
 * @a: the specification
 * @len: the lenght of the string
 * Return: the length sometimes, 0 otherwise
 */

int flags(const char *a, int *len)
{
	if (*a == '+')
	{
		(*len) += _putchar('+');
		return (1);
	}
	else if (*a == '#')
	{
		if (*(a + 1) == 'o')
			(*len) = _putchar('0');
		if (*(a + 1) == 'x' || *(a + 1) == 'X')
			(*len) = _printf("0x");
		return (1);
	}
	else if (*a == ' ')
	{
		(*len) += _putchar(' ');
		return (1);
	}
	return (0);
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

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(param, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (flags(&format[i], &len))
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
