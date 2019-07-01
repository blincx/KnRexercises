#include <stdio.h>

int main() {

    float c = 4.00333333;
    int d = (int) c;
    long de = (long) c;
    printf("%lu",de);
    
    (d > 5) ? printf("nope") : printf("yeps");
    (d < de) ? printf("A1") : printf("A2");

    register int ic = 111;
    register char b = 'B';
    printf("%d", ic);
}
