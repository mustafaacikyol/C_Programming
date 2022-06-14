#include <stdio.h>

int main(){

    int array[10] = {5,8,1,3,25,11,17,2,7,9};

    for( int i=0 ; i<9 ; i++ ){
        int tmp;

        for( int j=0 ; j<9 ; j++ ){

            if( array[j+1]<array[j] ){

                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;

            }
        }
    }

    for( int i=0 ; i<10 ; i++ ){

        printf("%d ",array[i]);

    }
    return 0;
}
