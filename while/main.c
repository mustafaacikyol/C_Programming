#include <stdio.h>

int main(){

    int number1,number2,choice=1;
    
    while(choice!=0){
        printf("Enter two numbers:");
        scanf("%d%d", &number1, &number2);
        printf("Sum = %d\n",number1+number2);
        printf("Will the program continue?(Yes:1 No:0)");
        scanf("%d",&choice);
    }
    return 0;
}
