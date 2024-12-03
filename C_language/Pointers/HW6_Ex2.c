#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    char alph[27];
    int x;
    char *ptr;

    printf("\n\n Pointer : Print all the alphabets:\n");
    printf("--                                                                                                                                                                                                                            -\n");

    ptr = alph;
    

    for (x = 0; x < 26; x++) {
        ptr[x] = 'A'+ x;
    }

    ptr = alph;

    printf(" The Alphabets are: \n");

    for (x = 0; x < 26; x++) {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n\n");

    return 0;
}