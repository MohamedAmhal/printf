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
int prt_unsigned_int(va_list nmb);
int prt_octal(va_list oc);
int prt_hexad(va_list hex);
int prt_HEXAD(va_list HEX);
int prt_pointor(va_list arg);
void prt_hexa_poi(unsigned long n, int *len);
int flags(const char *a, int *len);
int _puts(char *s);
<<<<<<< HEAD
void no_c_specifiers(va_list arg, char sp, int *len);
=======
int prt_string(va_list str);
>>>>>>> b23d3c42197639cc38755c04632d7a2930641451

#endif
