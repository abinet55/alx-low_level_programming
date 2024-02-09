#include "main.h"

/**
* set_bit - sets the value of a bit
* @n: pointer of an unsigned long integer
* @index: index
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int k;
if (index > 63)
return (-1);
k = 1 << index;
*n = (*n | k);
return (1);
}
