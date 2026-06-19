#include<stdio.h>
#include<stdlib.h>
int main(void){
    float mark;
    printf("Enter mark : ");
    scanf("%f",&mark);
    if(mark<50){
        printf("failed");
    }
    else
    printf("passed");
return EXIT_SUCCESS;
}