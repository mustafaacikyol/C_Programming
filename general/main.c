#include<stdio.h>

int main(){
    int number=1,counter=0,total=0;
    while(number!=0){
        printf("Enter a number:");
        scanf("%d",&number);
        if(number>0){
            counter++;
            total = total + number;
        }
    }

    printf("Quantity of positive numbers : %d",counter);
    printf("\nTotal of positive numbers : %d",total);
    
    return 0;
}
