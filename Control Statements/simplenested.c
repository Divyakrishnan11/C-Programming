#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2,num3;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("Largest number is First number %d",num1);
        }
        else
        printf("Largest number is Third number %d",num3);
    }
    else{
        if(num2>num3){
            printf("Largest number is  Second number%d",num2);
        }
        else
            printf("Largest number is Third number %d",num3);


    }
return EXIT_SUCCESS;
}