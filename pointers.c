#include <stdio.h>

int main() {

 // & - gives address of object
 // pointers can only point to variables and array elements
 // they cannot point to expressions, constants or register variables

 // * - indirection or dereferencing operator
 // access the object the pointer points to
 
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];

    // every pointer points to a specific data type
    // if ip points to x, *ip can occur in any context where 'x' can occur.

    *ip = *ip + 10; // valid!
    

}
