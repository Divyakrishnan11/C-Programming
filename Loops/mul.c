#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n=10,num,result;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=n;i++){
        result=i*num;
        printf("%d*%d=%d \n",i,num,result);
    }
    return EXIT_SUCCESS;
}