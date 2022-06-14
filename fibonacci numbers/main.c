#include<stdio.h>

int main(){

    int number_of_elements;
    printf("Enter the number of elements of the array:");
    scanf("%d",&number_of_elements);
    int array[number_of_elements];

    array[0] = 0;
    array[1] = 1;

    for( int i=2 ; i<number_of_elements ; i++ ){

        array[i] = array[i-1] + array[i-2];

    }

    for( int i=0 ; i<number_of_elements ; i++){

        printf("%d ",array[i]);
    }

    return 0;

}
