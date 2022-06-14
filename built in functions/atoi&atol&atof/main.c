#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];
    int number1;
    long number2;
    double number3;

    printf("Enter a number : ");
    gets(str);

    number1 = atoi(str);
    number2 = atol(str);
    number3 = atof(str);

    printf("int : %d\n", number1);
    printf("long : %ld\n", number2);
    printf("double : %lf\n", number3);

    return 0;

}
