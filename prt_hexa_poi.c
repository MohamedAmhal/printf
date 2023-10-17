#include "main.h"

/**
 * prt_hexa_poi - this is the function converte a int to hexadecimal
 * @n: the variable
 * @len: the lenght
 */

void prt_hexa_poi(unsigned long n, int *len)
{
	char *hex;

	hex = "0123456789ABCDEF";
	if (hex == NULL)
		exit(-1);
	if (n > 15)
		prt_hexa_poi(n / 16, len);

	_putchar(hex[n % 16]);
	(*len)++;
}
