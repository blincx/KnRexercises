#include <stdio.h>

int foo() {
    return -555;
}


int main() {
    // braced group within expression
    //
    int x = ({1; 2;}) + 3;
    printf("%d\n", x);
    // this produces '5'
    // it evaluates the whole block and then uses the value of the 
    // last statement contained in the expression;
    //
    int xi = 5;
    typeof(xi) y = 6;
    printf("%d %d\n", xi, y);

    //This declares y with the type of what x points to.
    typeof (&xi) bbb;
    //printf("

                
    int aa = ({ int y = foo (); int z;
    if (y > 0) z = y;
    else z = - y;
    z; });

    printf("%d",aa);
    
    int ff;
    typeof (ff) d;
    d = 22;
    printf("%d",d);
 
}
