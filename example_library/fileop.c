#include <stdio.h>
#include <errno.h>
int main (void) {
    FILE *fp;
    fp = fopen ("write.txt","w");
    if (fp == NULL) {
        printf ("File not created okay, errno = %d\n", errno);
        return 1;
    }
    fprintf (fp, "Hello, there.\n"); // if you want something in the file.
    fclose (fp);
    printf ("File created okay\n");
    return 0;
}
