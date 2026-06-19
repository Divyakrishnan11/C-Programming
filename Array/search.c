#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,arr[100],key,pos,found=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to search : ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            pos=i+1;
            found=1;
                        break;

        }
    }
        if(found==1){
                        printf("%d found at position %d",key,pos);

        }
        else{
            printf("Element not found");
        }
    
    return EXIT_SUCCESS;

}