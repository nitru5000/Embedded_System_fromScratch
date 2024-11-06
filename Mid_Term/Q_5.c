#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_binary(int n);

int main()
{

    int m;

    printf("Enter number :");
    scanf("%d",&m);
     
    printf("output : %d",count_binary(m));
    return 0;
}

int count_binary(int n)
{
    int count = 0  ;
    while (n > 0)
    {
        if( n & 1) count++;
        n = n >> 1 ;
    }
    
    return count ;
}