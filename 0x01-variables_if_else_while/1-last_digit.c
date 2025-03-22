#include <stdio.h>
#include <stdlib.h>

int main(){

	

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Enter a new number: \n");
    scanf("%d", &n);

    int lastDigit = n % 10;
    printf("Last digit is %d\n", lastDigit);

    printf("Last digit of ");
    printf("%d ", n);
    printf("is: %d\n", lastDigit);

        if ( lastDigit > 5) {
            printf("and is greater than 5\n");
        }

        if ( lastDigit == 0 ) {
            printf("and is 0\n");
        }

        if ( lastDigit < 6 && lastDigit != 0 ) {
            printf("and is less than 6 and not 0\n");
        }

        else {
            printf("\n");
        }

	return 0;
	}

