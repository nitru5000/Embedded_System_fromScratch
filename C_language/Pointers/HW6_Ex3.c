#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[20];
    int x;
    char *ptr;

    printf("\nInput a String:\n");
    gets(s); 
    ptr = s;
    
    printf("reverse of the string is:\n");

    for (x = strlen(s) - 1; x >= 0; --x)
    {
        printf("%c", ptr[x]);
    }

    return 0;
}