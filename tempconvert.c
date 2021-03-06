#include <stdio.h>

float celsiusconvert(float fahr);

struct point { int x, y; };

struct point p = { .y = 1, .x = 22};


struct bdata {
    int memstart;
    float memend;
    unsigned int mem;
};



struct bdata oi = { .memstart =  11, .memend = 22, };

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper) {
        celsius = celsiusconvert(fahr);
        //celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
        fahr = fahr+step;
    }
}


float celsiusconvert(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}
