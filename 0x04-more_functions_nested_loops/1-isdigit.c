#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point checks for characters
 * @c: character
 * Return: 0 or 1
 */
int print_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
