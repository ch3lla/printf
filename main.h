#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

#define BUFSIZE 1024
#define TRUE (1 == 1)
#define FALSE !TRUE
#define LOWHEX 0
#define UPHEX 1

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
char *q;
int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int handle_flags(const char *format, int *i);
void (*long_short(inventory_t *inv))(inventory_t *);
inventory_t *build_inventory(va_list *args_list, const char *format);
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_rot13(va_list args);
int rev_string(va_list args);

#endif
