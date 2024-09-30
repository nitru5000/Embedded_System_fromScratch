#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    float a ;  

    printf("Enter anumber "); 
    scanf("%f",&a) ;

     (a>0) ?   printf("%.2f is positives", a):(a<0) ?    printf("%.2f is negative",a):printf("you Entered zero.")  ;
    
   
     
    return 0;  
}   