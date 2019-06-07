#include <stdio.h>
#include <string.h>


#define OUT 0
#define IN 1

int main() {

    
    int c, STATE, wordnum = 0;
    //int wordsize[100] = {0};
    int wordsize[100];
    memset(wordsize, 0, sizeof wordsize);
    wordsize[99] = 'A';
    int lastword = 1;
    // zero the array
    /* for (int i=0;i<=100;i++) {
        wordsize[i] = 0;
    } */

    while ((c = getchar()) != EOF) {
            if (c == '\n' || c == ' ' || c == '\t') {
                STATE = OUT;
                printf("\nentry: %d\n", wordsize[wordnum]);
                printf("\nentry++: %d\n", wordsize[wordnum]++);
                
                wordsize[wordnum] = lastword;
                lastword = 1;
                printf("\nin whitespace land\n");
            } else if (STATE == OUT) {
                // in a word!
                STATE = IN;
                wordnum++;
                printf("\nentering word!\n");
            } else if (STATE == IN) {
                lastword++;
            }
    }
   printf("c = %c",c);
   
   printf("word size historgram:\n=============\n");
   int histogram[50] = {0}; // max size 50
   // making histogram
   for (int d=0;d<30;d++) {
       // histogram[5] = 1 word with 5
        histogram[wordsize[d]]++;        
    }


   for (int i=0;i<=30;i++) {
       printf("size   |   number of words");

        for (int a=0;a<=10;a++) {
            printf("=");
       }
        printf("\nwordize entry = %d",wordsize[i]);
   }
   //printf("sizeof(wordsize) = %lu", sizeof(wordsize));

}



