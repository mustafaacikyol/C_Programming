#include<stdio.h>

void bubble_sort( int x[], int N ){

    for (int i = 0; i < N-1; i++)
    {
        int tmp;

        for (int j = 0; j < N-1; j++)
        {

            if (x[j + 1] < x[j])
            {

                tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
            }
        }
    }
    
}

int main(){

    int array[10] = {5, 8, 1, 3, 25, 11, 17, 2, 7, 9};

    bubble_sort(array, 10);

    for (int i = 0; i < 10; i++){

        printf("%d ", array[i]);

    }

    return 0;
}
