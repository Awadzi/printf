#include "main.h"

/**
* get_size - Calculates the size for the argument
* @format: Formatted string in which to print the arguments
* @i: List of arguments to be printed.
*
* Return: Precision.
*/

int get_size(const char *format, int *i)
{
int current_j = *j + 1;
int size = 0;
if (format[current_j] == 'l')
size = S_LONG;
else if (format[current_j] == 'h')
size = S_SHORT;
if (size == 0)
*j = current_j - 1;
else
*j = current_j;
return (size);
}
