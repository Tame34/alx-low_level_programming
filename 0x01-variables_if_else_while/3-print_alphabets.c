#include <stdio.h>

int main(){

	char n;

	for ( n = 'a'; n <= 'z'; n++){

		putchar(n);
	}

	for ( n= 'A'; n <= 'Z'; n++){
		putchar(n);
	}

	putchar('\n');

	return 0;
}
