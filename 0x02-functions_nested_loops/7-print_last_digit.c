#include "main.h"
/**
* print_last_digit - prints last digit of the input
* @n: input
* Return: always 0
*/
int print_last_digit(int n)

{
int last = n % 10;
if (last < 0)
{
last = last * (-1);
_putchar(last + '0');
return (last);
}
else
{
_putchar(last + '0');
}
return (last);
}
