#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return EXIT_SUCCESS;
}