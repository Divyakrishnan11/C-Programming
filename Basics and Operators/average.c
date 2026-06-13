#include<stdio.h>
#include<stdlib.h>
int main(void){
    float num1,num2,num3,avg;
    printf("Enter 3 Numbers : ");
    scanf("%f%f%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("Average is : %f",avg);
    return EXIT_SUCCESS;
}