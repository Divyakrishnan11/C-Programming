#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Numbers\n");
    while(i<=n){
printf("%d\n",i);
i++;
    }
    return EXIT_SUCCESS;
}