#include <stdio.h>
/**
* main - prints alphabets
* first in lowercase then uppercase
*
*Return: Always 0(if successfull)
*/

int main(void)

{

char alphabet;

char letter;

for (alphabet = 'a'; alphabet <= 'z';alphabet++)

{

putchar(alphabet);

}

putchar('\n');
 
for (letter = 'A'; letter <= 'Z'; letter++);

{

putchar(letter);

}


return (0);

}
