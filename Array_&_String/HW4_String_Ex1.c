#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char arr[50] ,c,max ,f=0;

    printf("Enter a string:");
    gets(arr);
    max = sizeof(arr)/sizeof(arr[0]);
    printf("Enter a Character to find frequency :");
    scanf("%c",&c);

    for (int i = 0; i < max; i++)
    {
       if (arr[i] == c) f++;
    }
    
    printf("Frecuency of %c = %d ",c,f);

    return 0;
}