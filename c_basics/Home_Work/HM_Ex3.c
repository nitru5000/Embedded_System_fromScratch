#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    float a ,b ,c;  

    printf("Enter three numbers:");  

    scanf("%f %f %f", &a,&b,&c); 
 
    a = (a>b) ? a:(b>c) ? b:c ;
    

    printf("Largest number: %.2f" ,a);  
    
    
    return 0;  
}  