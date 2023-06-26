#include "main.h"
/**
* print_rev - prints in reverse
* @s: input string
* Return: void
*/

void print_rev(char *s)
{
int x = 0;
int len;
int y;
while (s[x] != '\0')
{
x++;
}
len = x;

for (y = len - 1; y >= 0; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
