#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *A;
    A = (int *)malloc(10 * sizeof(int));
    if (A == NULL)
    {
        printf("ERROR: could not allocate memory\n");
        exit(1); // terminate the program
    }
    
    A[0] = 123;
    A[1] = 444;
    A[9] = 674;
   
    printf("%d\n", A[0]); // *A
    printf("%d\n", A[1]); // *(A+1)
    printf("%d\n", A[9]); // *(A+9)
    
    free(A);
    return 0;
}
