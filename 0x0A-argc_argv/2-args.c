#include <stdio.h>
/**
* main - check the code
* @argc: The size of the argv
* @argv: An array
* Return: Always 0.
*/
int main(int argc, char **argv)
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", *argv++);
return (0);
}
