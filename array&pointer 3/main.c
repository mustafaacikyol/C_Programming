#include <stdio.h>

int main(){

    int a = 5;
    int *a_ptr = &a;

    printf("initial address value of a : %u\n", a_ptr);

    a_ptr++;
    printf("address value after adding 1 : %u\n", a_ptr);

    a_ptr-=2;
    printf("address value after subtracting 2 : %u\n", a_ptr);

    a_ptr-=1;
    printf("address value after subtracting 1 : %u\n", a_ptr);

    printf("2 next address of a : %u\n",&a+2);
    printf("1 previous address of a : %u\n", &a-1);

    return 0;

}
