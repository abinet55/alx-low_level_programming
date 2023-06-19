#include <stdio.h>

/**
* main - prints base 16
*
* Return: always 0
*/

int main(void)

{

char alphabet;

int num;

for(num = 0; num <= 9; num++)

putchar(num + '0' );

for(alphabet = 'a'; alphabet <= 'f'; alphabet++)

putchar(alphabet);

putchar('\n');

return (0);

}
