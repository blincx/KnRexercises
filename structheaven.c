#include <stdio.h>


#define details (1 << 8)
#define details2 (1 << 5)
#define details3 (1 << 2)


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
    printf("bdata1.memend = %f\n", bdata2.memend);
    printf("p.y = %d\n", p.y);
    printf("details = %d\n", details);
    printf("details2 = %d\n", details2);
    printf("details3 = %d\n", details3);


}


