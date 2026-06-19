#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        printf("Enterd number %d\n",n);
        n--;
    }
    return EXIT_SUCCESS;
}