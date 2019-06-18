#include <stdio.h>
#define MAXLINE 1000

int agetline(void);
void copy(void);

int max;
char line[MAXLINE];
char longest[MAXLINE];

/* print longest input line */

int main() {
    int len;
    //extern int max;
    //extern char longest[];

    max = 0;

    while ((len = agetline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s",longest);
}

int agetline(void) {
    
    //extern char line[];
    int c, i;
    for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n';i++)
        line[i] = c;
    if (c=='\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy () {
    int i;
    //extern char line[],longest[];
    i = 0;
    //printf("(to[i] = from[i]) = %c", (to[i]=from[i]));
    while ((longest[i] = line[i]) != '\0')
        i++;
}
