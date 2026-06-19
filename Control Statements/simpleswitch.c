#include<stdio.h>
#include<stdlib.h>
int main(void){
    int choice;
    printf("1.Porotta\n2.Biriyani\n3.FriedRice\n4.Mandhi\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("You selected Porotta ");
        break;
        case 2:
        printf("You selected Biriyani ");
        break;
        case 3:
        printf("You selected FriedRice");
        break;
        case 4:
        printf("You selected Mandhi");
        break;
        default:
        printf("Invalid choice");
    }
    return EXIT_SUCCESS;
}