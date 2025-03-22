#include <stdio.h>

int main(){

	char n;

	for ( n = 'a'; n <= 'z'; n++){
	if (( n == 'q' ) || (n == 'e' ))

		continue;

		putchar(n);
	}

	putchar('\n');

	return 0;
}

