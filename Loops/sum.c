#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of numbers : %d",sum);
    return EXIT_SUCCESS;
}