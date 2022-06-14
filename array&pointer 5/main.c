#include <stdio.h>

void print_screen(int a[], int N){

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

}

void print_screen_2(int *a, int N){

    for(int i = 0; i < N; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

}

void print_screen_3(int *begin, int *last){

    int *p;
    for(p = begin; p <= last; p++)
    {
        printf("%d\n", *p);
    }
    printf("\n");

}

int main(){

    int array_1[7] = {10,20,30,40,50,60,70};
    
    print_screen(array_1,2);

    print_screen_2(array_1,2);

    print_screen(&array_1[2],3);

    print_screen(array_1+2,3);

    print_screen_3(array_1, &array_1[5]);

    print_screen_3(array_1, &array_1[3]);

    print_screen_3(array_1, array_1+3);

    return 0;

}
