#include <stdio.h>  
int main() {  
    int counter, N=10;    
	printf("First 10 positive integers in reverse order are\n");
    counter = N;
    do {  
        printf("%d \n", counter);  
        counter--;
    } while(counter > 0);
    return 0;  
} 
