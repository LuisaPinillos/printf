#include "holberton.h"

/**
 * op_character - Identify the character specifier
 * @args: arguments
 * Return: the character
 */

int op_character(va_list args)
{
  int container = 0; 
      
  container = va_arg(args, int);
  write(1, container, 1);
  return(1);
}

/**
 * op_string- Identify the string specifier
 * @args: arguments
 * Return: the string
 */

int op_string(va_list args)
{
  int i = 0;
  char *container;
  
  container = va_arg(args, char *);

  return (0);
}