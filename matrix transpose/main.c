#include <stdio.h>

int main(){

    int matrix [][3] = {{15,23,19},{54,38,67},{94,49,76}};
    int transpose [3][3] ;

    printf("Matrix : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        
        printf("\n");

    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
        
    }

    printf("Matrix Transpose : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        
        printf("\n");
        
    }
    

    return 0;

}
