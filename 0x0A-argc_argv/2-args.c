#include <stdio.h>
/**
* main - prints all argument it recieves
* @argc: number of argument
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
int j;
if (argc >= 1)
{
for (j = 0; j < argc; j++)
{
printf("%s\n",argv[j]);
}
}
return (0);
}
