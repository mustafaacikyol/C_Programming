#include <stdio.h>

int main(){
    
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    for( int i=1 ; i<=number ; i++ ){

        for( int j=1 ; j<=number-i ; j++){
            printf(".");
        }

        for( int k=1 ; k<=i ; k++){
            printf("X");
        }

        printf("\n");
    }
    return 0;
}
