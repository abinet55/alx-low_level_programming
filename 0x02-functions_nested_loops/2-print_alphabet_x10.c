#include "main.h"
/**
* print_alphabet_X10 - print alphabet
* ten times
* Return: always 0
*/

void print_alphabet_x10(void)

{
char l;
int i;
for (i = 0; i < 10; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);

}

_putchar('\n');

}
}
