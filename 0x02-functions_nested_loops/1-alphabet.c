#include <stdio.h>

void print_alphabet(void);


int main(){


        print_alphabet();

    return 0;
}

void print_alphabet(){


    for (int i = 0; i <= 10; i++ ){
        for (char n = 'a'; n <= 'z'; n++){

                putchar(n);
        }
        putchar('\n');  //Prints a new line
    }
}

