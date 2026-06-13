#include<stdio.h>
#include<stdlib.h>
int main(void){
    int P;
    float R,n,SI;
    printf("Enter principal Amount : ");
    scanf("%d",&P);
    printf("Enter Interest Rate : ");
    scanf("%f",&R);
    printf("Enter Number of years : ");
    scanf("%f",&n);
    SI = (P*R*n)/100;
    printf("Simple Interest %f  ",SI);
    return EXIT_SUCCESS;
}