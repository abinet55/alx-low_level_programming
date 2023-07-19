#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - function
* @array: pointer to array
* @size: size of array
* @cmp: pointer to int
* Return: always succefull
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array == NULL)
return (-1);
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
for (j = 0; j < size; j++)
{
if (cmp(array[j]))
return (j);
}
return (-1);
}
