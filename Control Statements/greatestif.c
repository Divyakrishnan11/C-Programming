#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("First Number is Greatest  %d",num1);
    }
    else{
        printf("Second Number is Greatest  %d",num2);
    }
    return EXIT_SUCCESS;
}