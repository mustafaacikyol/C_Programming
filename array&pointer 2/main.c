#include <stdio.h>

int main(){

    printf("Size of short : %d\n", sizeof(short));
    printf("Size of int : %d\n", sizeof(int));
    printf("Size of long : %d\n", sizeof(long));
    printf("Size of char : %d\n", sizeof(char));

    short a;
    int b;
    long c;
    char d;

    printf("Size of a : %d\n", sizeof(a));
    printf("Size of b : %d\n", sizeof(b));
    printf("Size of c : %d\n", sizeof(c));
    printf("Size of d : %d\n", sizeof(d));

    int array[5];
    int *ptr;

    printf("Size of array : %d\n", sizeof(array));
    printf("Size of pointer : %d\n", sizeof(ptr));

    return 0;

}
