#include <stdio.h>

int main(){

    int a = 50;
    float b = 99.9558;
    char s1[50];

    sprintf(s1, "Sprintf example %d %f", a , b);

    printf("%s\n", s1);

    return 0;

}
