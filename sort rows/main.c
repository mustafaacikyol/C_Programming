#include <stdio.h>

void sort_rows(int matrix[4][4]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-1; j++)
        {
            for (int k = j+1; k < 4; k++)
            {
                if (matrix[i][k] < matrix[i][j])
                {
                    int tmp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = tmp;
                }
                
            }
            
        }
        
    }
    
}

int main(){

    int matrix[4][4] = {{15,64,35,26},{84,57,39,48},{83,27,39,12},{76,23,45,63}};

    sort_rows(matrix);

    printf("Sort arrows : \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
        
    }
    
    return 0;

}
