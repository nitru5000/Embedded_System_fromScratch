#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    
     char a ;  

    printf("Enter a character "); 
    scanf("%c",&a) ;

     (a>= 'a' &&  a<= 'z') || (a>= 'A' &&  a<= 'Z') ?   printf("%c is an alphapet ", a) : printf("%c is not an alphapet ", a);
   
     
    return 0;  
}   