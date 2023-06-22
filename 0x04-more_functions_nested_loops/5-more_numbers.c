#include "main.h"

/**
* more_numbers - prints 14x numbers
*
* Return: void
*/

void more_numbers(void)
{
int num;
int n;
for (num = 0; num <= 9; num++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar(( n / 10) + '0');
}
_putchar((n % 10 ) + '0');
}
_putchar('\n');
}
}
