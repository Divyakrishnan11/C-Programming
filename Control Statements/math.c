#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2,result,choice;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice : ");
scanf("%d",&choice);
if(choice == 1){
    result=num1+num2;
    printf("Result : %d",result);
}
    else if(choice == 2){
        result = num1-num2;
        printf("Result : %d",result);
    }
    else if(choice == 3){
        result = num1*num2;
        printf("Result : %d",result);
    }
    else if(choice == 4){
        result = num1/num2;
        printf("Result : %d",result);
    }
    else{
        printf("Invalid choice");
    }
    return EXIT_SUCCESS;

}