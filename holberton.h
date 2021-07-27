#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>

#define SPECIFIERS 2

/**
 * modifier - Defines a specifier to data types
 *
 * @mod: type of data type
 * @func_mod: pointer to function that prints data types
 *            according to their notation
*/

typedef struct modifier
{
	char *specifier;
	int (*func_specifier)(va_list arg);
} mod_t;


int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);

/* printf.c prototype */
int _printf(const char *format, ...);
int print_modifier(const char *format, va_list arg, mod_t *format_list);

#endif /* HOLBERTON_H */
