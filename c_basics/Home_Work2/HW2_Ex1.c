#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    
    int a ;  

    printf("Enter an integre you want to check:");  

    scanf("%d", &a); 
    
    if (a%2 == 0) printf("%d is even", a);  
    else printf("%d is odd", a);

    

    
    
    return 0;  
}  