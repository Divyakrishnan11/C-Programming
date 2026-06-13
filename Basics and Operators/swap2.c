#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a = 50,b = 100;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After Swapping a : %d     b : %d ",a,b);
    return EXIT_SUCCESS;
    
}