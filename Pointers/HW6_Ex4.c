#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s[20];
    int x ,i;
    int *ptr;
    printf("\nEnter the number of elements to store in array (max 15):");
    scanf("%d", &x);
    
    printf("\ninput 5 numbers of elements in the array : \n");
  

    ptr = s;

    for (i = 0; i < x ; ++i)
    {
        printf("Element - %d :",i+1);
        scanf("%d", &ptr[i]);
    }
   
    printf("\nThe elements of array in reverse order are:\n");

     for (; x > 0 ; --x)
    {
        printf("\nElement - %d : %d",x,ptr[x-1]);
        
    } 
    return 0;
}