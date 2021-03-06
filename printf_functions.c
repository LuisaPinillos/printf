#include "holberton.h"

/**
 * op_character - Print a character
 * @args: Arguments.
 * Return: The character.
 */

int op_character(va_list args)
{
	int container = 0;

	container = va_arg(args, int);
	write(1, &container, 1);
	return (1);
}

/**
 * op_string - Print strings.
 * @args: Arguments.
 * Return: The string.
 */

int op_string(va_list args)
{
	int i = 0;
	char *container;

	container = va_arg(args, char *);
	if (container != NULL)
	{
		while (container[i] != '\0')
		{
			write(1, &container[i], 1);
			i++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (i);
}

/**
 * op_porcentage - Print the character %.
 * @args: Arguments.
 * Return: A character (%).
 */

int op_porcentage(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}

/**
 * intRecursive - Function for print recursive numbers.
 * @integer: Intput of number.
 * @counter: Charather counter.
 * @power10: toil for created a charather.
 * Return: Longitud.
 */

int intRecursive(int integer, int counter, int power10)
{
	if ((integer / power10) < 10)
	{
		integer /= power10;
		integer += '0';
		write(1, &integer, 1);
		return (counter + 1);
	}
	else
	{
		int longitud = 0;

		power10 *= 10;
		longitud = intRecursive(integer, ++counter, power10);
		power10 /= 10;
		integer = (integer / power10) % 10;
		integer += '0';
		write(1, &integer, 1);
		return (longitud);
	}
}

/**
 * op_decimal - Main function for print numbers.
 * @args: Arguments.
 * Return: Longitud.
 */

int op_decimal(va_list args)
{
	int longitud = intRecursive(va_arg(args, int), 0, 1);

	return (longitud);
}
