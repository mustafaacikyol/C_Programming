#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, N, *arr_ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    arr_ptr = (int *)malloc(N * sizeof(int));
    if (arr_ptr == NULL)
    {
        printf("ERROR: could not allocate memory\n");
        exit(1); // terminate the program
    }
    for (i = 0; i < N; i++)
    {
        printf("enter number: ");
        scanf("%d", &arr_ptr[i]);
    }
    printf("entered numbers:\n");
    for (i = 0; i < N; i++)
        printf("%d\n", arr_ptr[i]);
    
    free(arr_ptr);
    return 0;
}
