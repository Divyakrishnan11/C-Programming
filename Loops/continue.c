#include<stdio.h>
#include<stdlib.h>
int main(void){
int i,n=4;
for(i=1;i<=n;i++){
    printf("Hi\n");
    if(i==2){
        continue;
    }
    printf("Hello\n");
}
printf("Finished");
return EXIT_SUCCESS;
}

