#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,arr[100],count=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    if(count !=0 ){
                printf("Number of even numbers in the array is %d",count);

    }
    else{
                        printf("No Even Numbers");


    }
    return EXIT_SUCCESS;
}