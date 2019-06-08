#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "Everyone memsets";
    memset(str,'-',5);
    puts(str);
    return 0;

}
