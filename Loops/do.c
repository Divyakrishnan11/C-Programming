#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i=1;
        printf("Enter a number : ");
        scanf("%d",&n);
        do{
            printf("%d\n",i);
                i++;


        }
    while(i<=n);
return EXIT_SUCCESS;
}