#include "holberton.h"

/**
 * spaces - function that lenght the empty spaces in the argument 
 * between the percent and the specifier
 * @spc: Argument
 * Return: number of the spaces
 */

int spaces(const char *spc)
{
    int i = 0;

    while (spc[i] == ' ')
    {
        i++;
    }
    return (i);
}