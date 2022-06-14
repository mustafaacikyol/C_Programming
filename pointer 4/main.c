#include <stdio.h>

void interchange_numbers_1(int a, int b){

    int tmp = a;
    a = b;
    b = tmp;

}

void interchange_numbers_2(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;

}

int main(){

    int number_1 = 1;
    int number_2 = 2;

    printf("Before interchange_numbers_1 function : \nnumber_1 : %d \nnumber_2 : %d \n", number_1, number_2);

    interchange_numbers_1(number_1, number_2);

    printf("After interchange_numbers_1 function : \nnumber_1 : %d \nnumber_2 : %d \n", number_1, number_2);

    printf("Before interchange_numbers_2 function : \nnumber_1 : %d \nnumber_2 : %d \n", number_1, number_2);

    interchange_numbers_2(&number_1, &number_2);

    printf("After interchange_numbers_2 function : \nnumber_1 : %d \nnumber_2 : %d \n", number_1, number_2);

    return 0;
    
}
