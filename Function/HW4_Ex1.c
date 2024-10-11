#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char arr[50], c = 0;

    printf("Enter the string  : \n");
    gets(arr);
    printf("Reverse string is : ");

    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }

    return 0;
}
