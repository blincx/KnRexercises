#include <stdio.h>

#define XMAS 25

#define IN 1  // inside a word
#define OUT 0 // outside a word

/* count lines, words, characters in output */
int main() {
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c=='\n')
            ++nl; // statement can be a single
        // or many in braces
        if (c == ' ' | c == '\n' | c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

