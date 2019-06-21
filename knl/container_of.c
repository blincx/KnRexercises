#include <stdio.h>



#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})

int main() {

    struct { int x; int y;} t;
    t.x = 22;
    t.y = 11;
    printf("%d\n%d\n",t.x,t.y);
    struct *eureka;
    eureka = container_of(*t, int, y);
    printf("\neureka = %d\n", eureka);

}
