#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char arr[50] ,c=0;

    printf("Enter a string: ");
    gets(arr);
    
    while (arr[c] != '\0')
    {
        c++;
    }
    
    printf("length of string: %d",c);
    

    return 0;
} 

