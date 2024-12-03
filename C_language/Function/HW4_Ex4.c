#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int power(int n , int p);

int main()
{
    int a, b;
    printf(" Enter a number:  ");
    scanf("%d",&a);
    printf(" Enter power of number (positive integer):  ");
    scanf("%d",&b);
    printf(" %d^%d = %d" ,a,b,power(a, b));
    return 0;
}

int power(int n , int p)
{
    if (p == 0) return 1;

    return  n * power(n , --p);
}
