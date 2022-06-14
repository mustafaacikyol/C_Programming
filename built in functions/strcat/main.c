#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char s1[100] = "aa bb cc";
    char s2[100] ;

    strcpy(s1, "test1");
    strcpy(s2, "try2");

    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    strcat(s1,s2);

    printf("After adding : \n");

    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    return 0;

}
