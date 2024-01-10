#include "main.h"
/**
* _pow_recursion - calculate power
* @x: input
* @y: input2
* Return: integre
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (x);
else
return (x * _pow_recursion(x, y - 1));
}
