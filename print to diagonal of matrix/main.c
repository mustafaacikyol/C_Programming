#include <stdio.h>

int main(){

    int number = 4;

    int matrix[4][4] = {{12,16,25,37},{98,35,84,65},{85,72,53,67},{58,34,26,17}};

    printf("Matrix : \n");

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
           printf("%d ", matrix[i][j]);
        }
        
        printf("\n");

    }

    printf("Diagonal elements of matrix : \n");

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
           
            if (i==j)
            {
                printf("%d ", matrix[i][j]);
            }

            printf("   ");

        }
        
        printf("\n");

    }

    //or you can print diagonal matrix that way which is below

    printf("Diagonal of matrix (second way) : \n");

    for(int i=0 ; i<number ; i++)
    {
        printf("%d\n", matrix[i][i]);
    }

    printf("Reverse diagonal elements of matrix : \n");

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {   
            printf("  ");
            
            if( i==number-j-1 )
            {
                printf("%d",matrix[i][j]);
            }

        }

        printf("\n");
        
    }

    printf("Reverse diagonal elements of matrix (second way) : \n");

    for (int i = 0; i < number; i++)
    {
        
        printf("%d\n", matrix[i][number-1-i]);
        
    }
    
    return 0;

}
