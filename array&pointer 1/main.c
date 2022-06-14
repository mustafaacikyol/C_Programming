#include <stdio.h>

int main(){

    char array[4] = {'T', 'E', 'S', 'T'};

    printf("size of char : %d\n", sizeof(char));
    printf("size of array : %d\n", sizeof(array));

    printf("Address of the first element : %u\n", &array[0]);               //or we can write array
    printf("Address of the second elemtent : %u\n", &array[1]);             //or we can write array+1

    printf("%c\n", array[2]);
    printf("%u\n", &array[2]);                                              //or we can write array+2

    return 0;

}
