#include "main.h"

/**
 * prt_HEXAD - this is the function converte a int to hexadecimal
 * @HEX: the variable
 * Return: the lenght
 */

int prt_HEXAD(va_list HEX)
{
	int i;
	int *table;
	int counter = 0;
	unsigned int num = va_arg(HEX, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	table = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		table[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (table[i] > 9)
			table[i] = table[i] + 7;
		_putchar(table[i] + '0');
	}
free(table);
	return (counter);
}
