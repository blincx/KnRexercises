#include "mylib.h"
#include <string.h>
#include <stdio.h>

int total_max = 100;

int libfunc(float y, int x) {

    Book book;
    strcpy(book.title, "How to graze on a thousand miles of sunburnt savanah");
    strcpy(book.author, "By Niles Bison");
    printf("%s",book.title);
    printf("%s",book.author);

    return 0;

};
