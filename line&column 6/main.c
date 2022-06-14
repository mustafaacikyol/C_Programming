#include <stdio.h>

int main(){
    int number;
    printf("Enter number of lines:");
    scanf("%d",&number);

    for( int i=1 ; i<=number ; i++ ){

        for( int j=1 ; j<=number-i ; j++ ){
            printf(".");
        }

        for( int k=1 ; k<=(2*i)-1 ;  k++){
            printf("X");
        }
        printf("\n");
    }

    return 0;
}
