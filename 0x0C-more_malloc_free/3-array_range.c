#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *a, x;
if (min > max)
return (NULL);
a = malloc(sizeof(*a) * ((max - min) + 1));
if (a == NULL)
return (NULL);
for (x = 0; min <= max; x++, min++)
a[x] = min;
return (a);
}
