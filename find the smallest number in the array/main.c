#include <stdio.h>

int find_smallest_number(int x[], int y){

    int small = x[0];
    
    for( int i=1 ; i<y ; i++ ){

        if( x[i]<small ){
            
            small = x[i];

        } 
    }

    return small;

}

int main(){

    int quantity,smallest_number;
    printf("How many numbers will you enter?");
    scanf("%d",&quantity);
    
    int array[quantity];
    
    for( int i=0 ; i<quantity ; i++ ){
        printf("Enter a number:");
        scanf("%d",&array[i]);
    }

    smallest_number = find_smallest_number(array,quantity);
    printf("The smallest number in the array : %d",smallest_number);

    return 0;
}
