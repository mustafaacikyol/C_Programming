#include <stdio.h>

void bubble_sort(int x[], int N){

    for (int i = 0; i < N - 1; i++){
        int tmp;

        for (int j = 0; j < N - 1; j++){

            if (x[j + 1] < x[j]){

                tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
            }
        }
    }
}

int dual_search( int x[], int N, int number){

    int first = 0;
    int last = N-1;
    
    while( first<=last ){
        
        int middle = (first + last) / 2;

        if( number == x[middle] ){

            return middle;
        
        } else if(number>x[middle]){

            first = middle + 1;

        } else {

            last = middle - 1;

        }
    }

    return -1;

}

int main(){

    int array[10] = {5, 8, 1, 3, 25, 11, 17, 2, 7, 9};

    bubble_sort(array, 10);

    for (int i = 0; i < 10; i++){

        printf("%d ", array[i]);
        
    }
    
    while(1){

        int searched_number;
        printf("\nEnter a number to search : ");
        scanf("%d",&searched_number);
        int place = dual_search( array, 10, searched_number);

        if( place == -1 ){

            printf("%d is not in the array",searched_number);

        } else{

            printf("\nIndex number of %d in the array : %d", searched_number, place);
        }

    }
    return 0;
}
