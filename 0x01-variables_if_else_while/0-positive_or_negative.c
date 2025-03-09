#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there
	 * @a: file system
	 * 
	 */

	printf("Enter a new number:\n ");
	scanf("%d", &n);

	if ( n > 0 ) {
		printf("Value is positive\n");
	}
	if ( n == 0 ){
		printf("Value is equal to zero\n");
	}
	if ( n < 0 ){
		printf("Value is negative\n");
	}

	else {
		printf("\n");
	}
	return (0);
}
