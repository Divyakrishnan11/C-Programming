#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,a[10];
    printf("Enter values ");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    printf("Enterd values are : ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return EXIT_SUCCESS;
}