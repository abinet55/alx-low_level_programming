#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: string to be printed
* @n: number of strings passed
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int x;
char *str;
va_start(valist, n);
for (x = 0; x < n; x++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (x < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
