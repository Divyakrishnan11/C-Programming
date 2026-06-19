#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,arr[100],sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum : %d",sum);
    return EXIT_SUCCESS;

}