#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i,arr[100],temp,j;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    }
    printf("sorted array : ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return EXIT_SUCCESS;

}