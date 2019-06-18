#include <stdio.h>


int main(void) {


    int a[6] = { [4] = 29, [2] = 15 };
    int b[6] = { 0, 0, 15, 0, 29, 0 };

    int widths[] = { [0 ... 9] = 1, [10 ... 99] = 2, [100] = 3 };
    struct point { int x, y; };
    struct point ptarray[10] = { [2].y = '1', [2].x = 'a', [0].x = 'b' };



}
