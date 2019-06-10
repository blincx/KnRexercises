
#ifndef _MYLIB_H_
#define _MYLIB_H_

#define MAX_WAIT 200

struct superstruct {
    int happy, clovis;
    float supra;
};


typedef struct superstruct superstruct;

typedef struct Books {
    char title[150];
    char author[150];
    char subject[150];
    int book_id;
} Book;


typedef unsigned char BYTE;


extern int total_max;

extern int libfunc(float y, int x);

#endif





