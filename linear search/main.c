#include <stdio.h>

int main(){

    int array[] = {8,15,24,39,45,51,67,73,84,93};
    int searched_number,i;
    printf("\nEnter a number to search : ");
    scanf("%d",&searched_number);

    for( i=0 ; i<11 ; i++ ){

        if( searched_number == array[i]){
            
            printf("index number of %d in the array : %d",searched_number,i);
            break;

        }
    }

    if( i == 11){

        printf("%d is not found in the array!",searched_number);
        
    }

    return 0;
}
