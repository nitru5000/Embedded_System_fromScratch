#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int n[]);

int main()
{

    int a[5]={1,2,3,4,5};

    printf(" input : a[5]={1,2,3,4,5} \n");
    swap(a);

    return 0;
}

void swap(int n[])
{
    int size = 4;
    for (int i = 0; i < (4 / 2); i++)
    {
        n[i] = n[i] + n[size];
        n[size] = n[i] - n[size];
        n[i] = n[i] - n[size];
        size--;
    }
    printf("output : ");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d", n[i]);
    }
    
    
}