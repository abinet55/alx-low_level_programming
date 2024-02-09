#include "main.h"

/**
* flip_bits - returns the number of bits
* @n: first number
* @m: second number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int numbits;
for (numbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
numbits++;
}
return (numbits);
}
