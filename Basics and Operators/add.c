#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1;
    float num2,sum;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter Second number : ");
    scanf("%f",&num2);
    sum = num1+num2;
    printf("Sum : %f",sum);
    return EXIT_SUCCESS;
}