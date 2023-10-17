#include "main.h"

/**
 * prt_hexad - this is the function converte a int to hexadecimal
 * @hex: the variable
 * Return: the lenght
 */

int prt_hexad(va_list hex)
{
	int i;
	int *table;
	int counter = 0;
	unsigned int num = va_arg(hex, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
