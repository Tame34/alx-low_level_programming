#include <stdio.h>
void print_alphabet(void);

int main(){

	print_alphabet();

	return 0;
}

void print_alphabet(){

	for (n = 'a'; n <= 'z'; n++){
				
		printf("%c\n", n);
	}
}
