#include <stdio.h>
/**
* main - prints alphabets
* first in lowercase then uppercase
*
*Return: Always 0(if successfull)
*/

int main(void)

{

int alphabet;

for (alphabet = 'a'; alphabet <= 'z';alphabet++)
putchar(alphabet);

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);

putchar('\n');

return (0);
}
