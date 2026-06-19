#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n, arr1[100],arr2[100],temp;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    printf("Enter the values for Array1 : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the values for Array2 : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++){
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("Atfer swapping Array1 : ");
    for(i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    printf("After swapping Array2 : ");
    for(i=0;i<n;i++){
        printf("%d\t",arr2[i]);
    }
    return EXIT_SUCCESS;
}