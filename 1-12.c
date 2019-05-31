#include <stdio.h>

#define OUT 0
#define IN 1

int main () {

    int c, STATE;
    STATE = 0;
    while ((c = getchar()) != EOF) {
       if (c=='\t' || c==' ' || c=='\n') { 
            STATE = OUT;
            continue;
        } else if (STATE == OUT) {
            STATE = IN;
            putchar('\n');
        }
       putchar(c);
    }
}
