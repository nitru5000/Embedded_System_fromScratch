#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int n);

int main()
{

    int m;

    printf(" Enter number :");
    scanf("%d", &m);
     
    printf("%d ",sum(m));
    return 0;
}

int sum(int n)
{
    return n*(n+1)/2 ;
}