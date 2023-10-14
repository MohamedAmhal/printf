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

int _printf(const char *format, ...)
{

}
