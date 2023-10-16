#include "main.h"

/**
 * _strlen - calculates the lenght of a string
 * @s: pointer char input
 * Return: the lenght of s
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;

	return (c);

}
/**
 * _strlencst - strlen for constent char pointer
 * @s: pointer char input
 * Return: the lenght of s
 */

int _strlencst(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;

	return (c);

}
