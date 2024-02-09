#include "main.h"

/**
* get_endianness - checks the ending
* Return: o or 1
*/

int get_endianness(void)
{
unsigned int i;
char *c;
i = 1;
c = (char *) &i;
return ((int)*c);
}
