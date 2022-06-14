#include <stdio.h>

int main(){

    for( int i=1 ; i<=5 ; i++ ){

        for( int j=1 ; j<=5-i ; j++ ){
            printf(".");
        }

        for( int k=1 ; k<=i ; k++ ){
            printf("X");
        }

        for( int m=1 ; m<i ; m++ ){
            printf("Z");
        }
        
        printf("\n");
    }

    return 0;
}
