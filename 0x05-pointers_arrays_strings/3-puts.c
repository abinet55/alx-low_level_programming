#include "main.h"
/**
* _puts - prints string
* @str: input character
*
* Return: void
*/

void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x] + '0');
}
_putchar('\n');
}
