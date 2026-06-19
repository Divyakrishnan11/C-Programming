#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    do{
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("Enterd number %d\n",n);

    }
    while(n!=5);
return EXIT_SUCCESS;
}