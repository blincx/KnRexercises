#include <stdio.h>
#define MAXLINE 200

int agetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = agetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 10)
        printf("%s",longest);
}

int agetline(char s[], int lim) {
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
        s[i] = c;
    if (c=='\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy (char to[], char from[]) {
    int i;
    i = 0;
    //printf("(to[i] = from[i]) = %c", (to[i]=from[i]));
    while ((to[i] = from[i]) != '\0')
        i++;
}
    


