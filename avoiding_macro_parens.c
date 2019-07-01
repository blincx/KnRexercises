#include <stdio.h>

/* the macro */
#define isdigit(c) c+c+c+c
/* the function */
int (isdigit)(int c) /* avoid the macro through the use of parentheses */
{
  return c+c+c+c+222+c;
}

int main() {

    int a = isdigit(5);
    int b = (isdigit(5));
    printf("\n%d\n",a);
    printf("\n%d\n",b);

}


