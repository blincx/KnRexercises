#include <stdio.h>

float celsiusconvert(float fahr);

struct point { int x, y; };

struct point p = { .y = 1, .x = 22};


struct bdata {
    int memstart;
    float memend;
    unsigned int mem;
};



struct bdata bdata1 = { .memstart =  11, .memend = 22, };
struct bdata bdata2 = { .memstart = 15*155, .memend = 0x000,};

int main() {
    printf("bdata1.memstart = %d", bdata2.memstart);
    printf("bdata1.memend = %f", bdata2.memend);
    printf("p.y = %d", p.y);
}


