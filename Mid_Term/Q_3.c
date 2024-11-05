#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Prime  0 
#define not_prime 1
void check_prime(int n);

int main()
{

    int i, low;

    printf(" Enter the two numbers (intervals) :");
    scanf("%d %d", &i, &low);
    printf(" Prime numbers are : \n ");
    
    for (; i < low; i++)
    {
        check_prime(i);
    }

    return 0;
}

void check_prime(int n)
{
    if(n == 1) {
     printf("%d ", n);
     return ;
    } 
    int flag = Prime;
    int i = 2 ;
    for (; i < (n / 2); i++)
    {
        
        if (n % i == 0)
        {
            flag = not_prime;
            break;
        }
    }
    if (flag == Prime)
        printf("%d ", n);
}