#include<stdio.h>

int main(){

    int array[10] = {15,34,8,27,13,67,42,18,24,46};
    printf("Unordered array : ");
    
    for( int i=0 ; i<10 ; i++ ){

        printf("%d ",array[i]);

    }

    for( int i=0 ; i<9 ; i++ ){

        int tmp, j;
        int smallest_index = i;

        for( j=i+1 ; j<10 ; j++ ){

            if (array[j] < array[smallest_index]){

                smallest_index = j ;

            }

        }

        tmp = array[i];
        array[i] = array[smallest_index];
        array[smallest_index] = tmp;

    }

    printf("\nOrdered array : ");

    for( int i=0 ; i<10 ; i++ ){

        printf("%d ",array[i]);

    }

    return 0;
}
