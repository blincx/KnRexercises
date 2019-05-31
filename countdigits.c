#include <stdio.h>

/* count digits, whitespace, others */

#define ANGRY_VARIABLE 3

main() 
{
    int c, i, nwhite, nother;
    int ndigit[10]; // array!

    nwhite = nother = 0;

    for (i = 0; i<10; i++)
        ndigit[i] = 0;

    ndigit[3] = ANGRY_VARIABLE;
    printf("ndigit[ANGRY_VARIABLE] = %d",ndigit[ANGRY_VARIABLE]);

    printf("experiment\n\n");
    printf("a=");
    printf("%c", 'a');
    printf("a=");
    printf("%d",'a');
    printf("\n");
    printf("sizeof(char)==1 :\n");
    printf("%d", sizeof(char)==1);
    printf("nul character= %c\n",'\0');
    printf("nul = %d\n",'\0');

    // a string in C is an array of char's ending 
    // with a nul byte '\0' 
    // so a 7-letter string would be in an array[8].
    //
    while ((c = getchar()) != 'e') 
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c=='\n' || c=='\t') 
            ++nwhite;
        else
            ++nother;
    
    printf("digits =");
    for (i=0;i<10;i++)
        printf(" %d", ndigit[i]);

    printf(", white space = %d, other = %d\n",nwhite,nother);
    

}
