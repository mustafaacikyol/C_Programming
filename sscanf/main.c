#include <stdio.h>

int main(){

    char s1[] = "aaa 10 7.5";
    char s2[20];
    int x;
    float y;

    sscanf(s1,"%s %d %f", s2,&x,&y);
    printf("%s\n", s2);
    printf("%d\n", x);
    printf("%f\n", y);

    return 0;

}
