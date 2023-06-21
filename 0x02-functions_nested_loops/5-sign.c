#include "main.h"
/**
* print_sign - checks whether n is negative
* or positive or zero
* @n: input
* Return: always 0
*/

int print_sign(int n)

{
if (n > 0)

{

_putchar('+');

return (1);

}

else if (n < 0)

{

_putchar('-');

return (-1);

}

else

{

_putchar('0');

return (0);

}

}
