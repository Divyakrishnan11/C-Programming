#include<stdio.h>
#include<stdlib.h>
int main(void){
    float mark;
    printf("Enter the mark : ");
    scanf("%f",&mark);
    if(mark>=90){
        printf("Grade A");
    }
    else if(mark>=80){
        printf("Grade B");
    }
    else if(mark>=70){
        printf("Grade C");
    }
    else if(mark>=60){
        printf("Grade D");
    }
    else if(mark>=50){
        printf("Grade E");
    }
    else 
    printf("failed");
return EXIT_SUCCESS;

}