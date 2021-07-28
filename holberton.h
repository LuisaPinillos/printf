#ifndef PRINT_FUNCTION_H
#define PRINT_FUNCTION_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct op
{
    char *op;
    int (*f)(va_list args);
} op_t;

#endif