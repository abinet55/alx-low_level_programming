#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always 0 or 1.
*/
int main(int argc, char **argv)
{
int a, b, sum = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (!isdigit(argv[a][b]))
{
printf("%s\n", "Error");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%i\n", sum);
return (0);
}
