#include<stdio.h>

void build_triangle(int x){

    for( int i=0 ; i<x ; i++){

        for( int j=0 ; j<=i ; j++){
            printf("X");
        }
       
        printf("\n");
    }

    for( int i=1 ; i<x ; i++ ){

        for( int j=x ; j>i ; j-- ){
            printf("X");
        }
        
        printf("\n");
    }
}

int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    build_triangle(number);
    return 0;
}
