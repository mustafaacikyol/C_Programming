#include <stdio.h>

    char a = 'T';
    char b = 'E';
    char c = 'S';
    char d = 'T';

int main(){

    printf("address of a : %d\n", &a);
    printf("address of b : %d\n", &b);
    printf("address of c : %d\n", &c);
    printf("address of d : %d\n", &d);
 
    printf("value of a : %d\n", a);

    char *p;
    p = &a;

    printf("value of p : %d\n", p);
    printf("value of *p : %d\n", *p);

    *p = 'B';
    printf("value of a : %d\n", a);
    printf("value of *p : %d\n", *p);

    return 0;

}
