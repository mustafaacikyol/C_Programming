#include<stdio.h>

int main(){

    int number_of_elements = 5;
    int array[] = {1,2,3,4,5};

    for( int i=0 ; i<number_of_elements/2 ; i++ ){

        int tmp = array[i];
        array[i] = array[number_of_elements-i-1];
        array[number_of_elements-i-1] = tmp;

    }

    for( int i=0 ; i<number_of_elements ; i++ ){

        printf("%d ",array[i]);
    }
    
    return 0;
}
