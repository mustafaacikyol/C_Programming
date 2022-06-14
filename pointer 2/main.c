#include <stdio.h>

int main(){

    int a = 5;
    printf("value of a : %d\n", a);
    printf("address of a : %p\n", &a);
    printf("address of decimal base : %u\n", &a);

    int *p;
    p = &a;
    
    printf("p : %p\n",p);
    printf("*p : %d\n", *p);

    *p = 32;
    printf("a'nin degeri : %d\n", a);
    
    return 0;

}
