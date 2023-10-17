#include "main.h"

/**
 * prt_octal - converte int to octal reperesentation
 * @oc: the variable
 * Return: the length
 */

int prt_octal(va_list oc)
{
	unsigned int number = va_arg(oc, unsigned int);
	unsigned int retu = number;
	int i;
	int *table;
	int compteur;

	while (number / 8 != 0)
	{
		number /= 8;
		compteur++;
	}
	compteur++;

	table = malloc(sizeof(int) * compteur);

	for (i = 0; i < compteur; i++)
	{
		table[i] = retu % 8;
		retu /= 8;
	}

	for (i = compteur - 1; i >= 0; i--)
	{
		_putchar(table[i] + '0');
	}
	free(table);
	return (compteur);
}
