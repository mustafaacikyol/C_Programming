#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *A;
    A = (int *)malloc(sizeof(int));
    printf("The memory address indicated by A: %p\n\n", A);
    *A = 123;
    printf("value of A: %d\n\n", *A);
    
    free(A);

    return 0;
}
