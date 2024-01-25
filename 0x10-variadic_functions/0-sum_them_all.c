#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all parameter
* @n: first parameter
* Return: returns integer
*/

int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int x;
int sum = 0;
if (n == 0)
return (0);
va_start(valist, n);
for (x = 0; x < n; x++)
sum = sum + va_arg(valist, int);
va_end(valist);
return (sum);
}
