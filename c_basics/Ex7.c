#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    int a, b;  

    printf("Enter a value:");  
    scanf("%d", &a);  
    printf("Enter b Value:");
    scanf("%d", &b);  

    
    a = a + b;   
    b = a - b;   
    a = a - b;  

    printf("After swapping: a = %d, b = %d\n", a, b);  
    return 0;  
}  