#include <stdio.h>

int main(){

    int array_1[5] = {10,20,30,40,50};
    int *ptr;
    ptr = array_1;                                      // or int ptr = &array_1[0]

    //to print second element of array
    printf("Second element of array : %d\n", *(ptr+1));

    //the value of the 2 next address of the pointer
    printf("the value of the 2 next address of the pointer : %d\n",*(ptr+2));

    //can be used as pointer array notation
    printf("a[2] : %d\n", ptr[2]);

    //can be used as array pointer notation
    printf("(a+2) : %d\n", *(ptr+2));

    //the address of the element at the 2nd index of the array
    printf("the address of the element at the 2nd index of the array : %u\n", &array_1[2]);
    printf("the address of the element at the 2nd index of the array : %u\n", ptr+2);

    return 0;

}
