#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints name
* @name: pointer to char
* @f: pointer to function
* Return: successful
*/

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
else
f(name);
}