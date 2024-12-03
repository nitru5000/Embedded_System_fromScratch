#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int Unique(int *a, int size) {  
    int unique = 0;  
    for (int i = 0; i < size; i++) {  
        unique ^= a[i];  
    }  
    return unique;  
}  

int main() {  
    int  arr[3]={4,2,4};
    printf("input : arr[3]={4,2,4} \n");  
    int size = 3; 
    int uniqueNumber = Unique(arr, size);  
    printf("The number is: %d", uniqueNumber);  
    return 0;  
}