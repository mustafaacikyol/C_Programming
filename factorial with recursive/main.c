#include <stdio.h>

int factorial(int x){
    
    int product=1;
    
    if(x>1){
        
        product = x * factorial(x-1);
    
    }

    return product; 

}

int main(){

    int number,factorial_result;
    printf("Enter a number:");
    scanf("%d",&number);
    factorial_result = factorial(number);
    printf("%d",factorial_result);

    return 0;
}
