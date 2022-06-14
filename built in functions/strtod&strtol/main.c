#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[30] = "20.30300 Bu kisim yazidir";
    char *untranslatablePart;
    double translatablePart;

    translatablePart = strtod(str, &untranslatablePart);
    printf("Tanslatable part : |%lf|\n", translatablePart);
    printf("The untranslatable part : |%s|\n", untranslatablePart);

    char *untranslatablePart2;
    long translatablePart2;
    translatablePart2 = strtod(str, &untranslatablePart2);
    printf("Tanslatable part : |%ld|\n", translatablePart2);
    printf("The untranslatable part : |%s|\n", untranslatablePart2);

    return 0;

}

