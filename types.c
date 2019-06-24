#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'

#define VTAB2 '\xb'
#define BELL2 '\x7'

int strlen2(const char[]);

int main() {
    short sh; // int is implied
    short int happo;
    long counter;
    long int hapoeoeo;

    unsigned long int soooosl;
    signed long int wieioe;

    int upper, lower, upper2, lowerforever, however, whatever;

    float eps = 1.0e-15;

    signed int shapiro;
    unsigned int happenstance;
    signed char elvis;
    unsigned char gooftroop;

    const double e = 2.718389283789;
    const char eve[22] = "iowejfoi";
    
    const char msg[12] = "warning: ";


    happenstance = -15;
   
    enum boolean { NO, YES, GOAT };
    // first value in an enum has value 0, next value 1
    printf("NO = %d\n", NO);
    printf("YES = %d\n", YES);
    printf("GOAT = %d\n", GOAT);

    // const declaration can also be used with array arguments
    // to indicate that the function does not change that array;
    const char ee[33];
    int aa = strlen2(ee);
    long double amazebo;
        printf("\n%c\n", BELL);
    printf("length of string happy = %d",strlen2("happy"));

    if (!strlen2("")) {
        printf("goofffyy");
    }
    if (!0) {
        printf("What would you recommend?");
    }
}

int strlen2(const char ssstr[]) {
    int i;
    i = 0;
    while (ssstr[i] != '\0')
        i++;
    return i;
}
