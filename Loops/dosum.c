#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,sum=0;
    do{
        printf("Enter a number : ");
        scanf("%d",&n);
        sum=sum+n;
    
    }
    while(n>0);
    printf("sum : %d",sum);
return EXIT_SUCCESS;
}