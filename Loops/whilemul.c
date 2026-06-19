#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<=10){
        printf("%d * %d = %d\n",i,n,i*n);
        i++;
    }
    return EXIT_SUCCESS;
}