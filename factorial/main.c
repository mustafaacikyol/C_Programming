#include <stdio.h>

int main(){

    while(1){
        int number;
        long long int product = 1;
        printf("\nEnter a number:");
        scanf("%d",&number);

        for(int i=1;i<=number;i++){
            product=product*i;
        }

        printf("\n%d ! = %lld",number,product);
    }
    return 0;
}
