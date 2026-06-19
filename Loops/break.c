#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n=10;
    for(i=1;i<=n;i++){
        printf("Hi\n");
        if(i==2){
            printf("Hello\n");
            break;
        }
        
    }
    printf("finished");
    return EXIT_SUCCESS;
}