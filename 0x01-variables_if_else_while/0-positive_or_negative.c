#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints positive,negative or zero
* return:value is always zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	  {
	    printf("is negative\n");

	    return (0);

	  }

	else if (n > 0)

	  {
	  printf("is posetive\n");

	  return (0);

	  }

	else

	  {
	    printf("is zero\n");

	    return (0);
	  }
	
     
}
