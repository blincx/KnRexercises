#include <stdio.h>

#define HAPPY EOF
int main() {
    int c,d;
    int last_was_space = 0;
    //printf("last_was_space = %d",last_was_space);
    while ((c = getchar()) != HAPPY) {
        if (c==' ' && last_was_space == 1) {
            continue;
        }

        if (c==' ') {
            last_was_space = 1;
        } else {
            last_was_space = 0;
        }
        putchar(c); 
    }
}

