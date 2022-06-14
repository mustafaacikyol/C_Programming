#include <stdio.h>

void assign_number_20(int x){

    x = 20;

}

void assign_number_30(int *x){

    *x = 30;

}

int main(){

    int number = 10;

    printf("The number : %d\n", number);

    assign_number_20(number);
    printf("After assign_number_20 function the number : %d\n", number);

    assign_number_30(&number);
    printf("After assign_number_30 function the number : %d\n", number);

    return 0;

}
