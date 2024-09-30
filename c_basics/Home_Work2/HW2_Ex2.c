#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a;

    printf("Enter an Alphabet:");

    scanf("%c", &a);

    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel.\n", a);
        break;
     default:
        printf("%c is consonant", a);
        break;
    }

    return 0;
}