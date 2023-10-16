#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlencst(const char *s);
int prt_str(va_list words);
int prt_char(va_list word);
int prt_pers(void);
int prt_int(va_list nmb);
int prt_dec(va_list nmb);
void c_specifiers(va_list arg, char sp, int *len);
int prt_binary(va_list bin);

#endif
