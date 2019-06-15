#include <stdio.h>

int demonstrate() {

    static int staticx = 0;
    int nonstatic = 0;

    staticx += 5;
    nonstatic += 5;

    printf("static = %d, nonstatic = %d\n", staticx, nonstatic);


    return 0;
}

int main() {

    for (int i=0;i<=10;i++) {
        demonstrate();
    }

}
