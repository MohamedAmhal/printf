#include "main.h"

/**
 * _strlen - calculates the lenght of a string
 * @s: pointer char input
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);

	return (0);
}

/**
 * _strlencst - strlen for constent char pointer
 * @s: pointer char input
 * Return: the lenght of s 
 */

int _strlencst(const char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);

	return (0);
}

