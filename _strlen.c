#include "main.h"

/**
 * _strlen - calculates the lenght of a string
 * @s: pointer string input
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);

	return (0);
}

