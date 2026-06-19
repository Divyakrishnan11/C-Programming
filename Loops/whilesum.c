#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n;
        n--;
    }
    printf("Sum : %d",sum);
    return EXIT_SUCCESS;
}