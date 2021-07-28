#ifndef HOLBERTON_H
#define HOLBERTON_H

/*LIBRARIES*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/*STRUCTURE*/
/**
 * struct op - Structure that define the functions.
 * @op: Pointer.
 * @f: The function associated.
 */
typedef struct op
{
	char *op;
	int (*f)(va_list args);
} op_t;

/*PROTOTYPES*/
int _printf(const char *format, ...);
int (*get_op_func(const char *s))(va_list args);
int op_character(va_list args);
int op_string(va_list args);
int op_porcentage(va_list args);

#endif
