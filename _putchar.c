#include <unistd.h>
#include "main.h"
/* .C Main For ALX Students Provided with Betty style */
/**
* _putchar - Entry point
* @x: the variable
* Description: Provided Description
* Return: 0 (Success)
* Or error, -1
*/
int _putchar(char x)
{
return (write(1, &x, 1));
}
