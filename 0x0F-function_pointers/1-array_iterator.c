#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - iterate an array
* @size: size of an array
* @action: pointer to function
* @array: pointer to array
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int c;
if (action == NULL)
return;
if (array == NULL)
return;
if (size <= 0)
return;
for (c = 0; c < size; c++)
{
action(array[c]);
}
}
