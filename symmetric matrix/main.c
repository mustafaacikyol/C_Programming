#include <stdio.h>

int symmetric(int matrix[4][4]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0;
            }
            
        }
        
    }
    
    return 1;
    
}

int symmetric_2(int matrix[4][4]){

    //just check by looping the upper triangular matrix

    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0;
            }
            
        }
        
    }
    
    return 1;
    
}

int main(){

    int matrix_1 [4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix_2 [4][4] ={{1,2,3,4},{2,6,7,8},{3,7,11,12},{4,8,12,16}};

    if(symmetric(matrix_1))
    {
        printf("The matrix_1 is symmetric\n");
    }
    else
    {
        printf("The matrix_1 is not symmetric\n");
    }

    if(symmetric(matrix_2))
    {
        printf("The matrix_2 is symmetric\n");
    }
    else
    {
        printf("The matrix_2 is not symmetric\n");
    }

    //using the second function

    if(symmetric_2(matrix_1))
    {
        printf("The matrix_1 is symmetric\n");
    }
    else
    {
        printf("The matrix_1 is not symmetric\n");
    }

    if(symmetric_2(matrix_2))
    {
        printf("The matrix_2 is symmetric\n");
    }
    else
    {
        printf("The matrix_2 is not symmetric\n");
    }
  
    return 0;

}
