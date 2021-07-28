#include "holberton.h"

/**
 * op_character - compare the conversion specification with 
 * corresponding function
 * @args: arguments
 * @char: the specification conversion
 * Return: the specifier
 */

int (*get_op_func(char *s))(va_list args)
{
  op_t ops[] = {
        {"c", op_character},
        {"s", op_string},
        {"%", op_porcentage},
        {NULL, NULL}};
        int iterator = 0;