#include "main.h"
/**
* _puts_recursion - prints string
* @s: pointer to string
* Return: nothing
*/

void _puts_recursion(char *s)
{
int i = 0;
if (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
else
_putchar('\n');
}
