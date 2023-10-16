#include "main.h"


int prt_bin(va_list arg)
{
	int x = 0;
	int y = 0;
	int i, j = 1;
	int a;
	unsigned int number;
	unsigned int b;

	number = va_arg(arg, unsigned int);
	for (i = 0; i < 32; i++)
	{
		b = ((j <<
