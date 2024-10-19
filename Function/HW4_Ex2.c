#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rev(int c);

char arr[100];

int main()
{

    printf(" Enter a sentence  :  ");
    gets(arr);
    int i = strlen(arr) - 1;
    rev(i);

    return 0;
}

int rev(int c)
{
    if (c < 0)
        return 0;
    printf("%c", arr[c]);
    rev(--c);
}

