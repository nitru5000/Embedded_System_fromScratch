
void reverse_words(char *s);

#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  

void reverseWords(char *str) {  
  
    int n = strlen(str);  
    for (int i = 0; i < n / 2; i++) {  
        char temp = str[i];  
        str[i] = str[n - i - 1];  
        str[n - i - 1] = temp;  
    }  

     
    int start = 0;  
    for (int i = 0; i <= n; i++) {  
        
        if (str[i] == ' ' || str[i] == '\0') {  
            int end = i - 1;  
            while (start < end) {  
                char temp = str[start];  
                str[start] = str[end];  
                str[end] = temp;  
                start++;  
                end--;  
            }  
            start = i + 1;  
        }  
    }  
}  

int main() {  
    char str[100];  
    printf("input : mohamed gamal\n");
    strcpy(str, "mohamed gamal");  
    reverseWords(str);  
    
    printf("Output: %s\n", str);   
    return 0;  
}