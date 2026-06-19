#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    do{
        printf("%d * %d = %d\n",i,n,i*n);
        i++;
    }
    while(i<=10);
    return EXIT_SUCCESS;
}