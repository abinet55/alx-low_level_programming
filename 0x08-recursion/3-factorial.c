#include "main.h"
/**
* factorial - calulate factorial of given nmber
* @n: input
* Return: intger
*/

int factorial(int n)
{
int fac;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
fac = n * factorial(n - 1);
return (fac);
}
