#include <stdio.h>

int main(){


	char hex[] = "0123456789abcdef";

	for ( int n = 0; n = <= 16; n++ ) {

		putchar(hex[n]);

		putchar(' ');
	}

	putchar('\n');

	return 0;
}

