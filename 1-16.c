#include <stdio.h>
#define MAXLINE 10

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
            char longest2[max];
            copy(longest2, line);
            printf("\nlongest is= %d\n",max);
            printf("%s",longest2);
        }

    //if (max > 0)
        //printf("%s",longest);
}

int agetline(char s[], int lim) {
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n';i++)
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
