#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,arr[50],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enterd values : ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return EXIT_SUCCESS;
}