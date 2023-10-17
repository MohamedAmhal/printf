#include "main.h"

/**
 * prt_hexa_poi - this is the function converte a int to hexadecimal
 * @num: the variable
 * Return: the lenght
 */

int prt_hexa_poi(unsigned long int num)
{
	long int i;
	long int *table;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	table = malloc(counter * sizeof(long int));

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
