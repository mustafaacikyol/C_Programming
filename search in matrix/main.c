#include <stdio.h>

void search(int matrix[][3], int number){

    int location[2] = {-1};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (number == matrix[i][j])
            {
                printf("%d is in the matrix and index of it : [%d][%d]\n", number , i, j);
                location[0] = i;
                location[1] = j;
                printf("%d %d",location[0],location[1]);
                break;
            }
            
        }
        
    }

    if (location[0] == -1)
    {
       printf("%d not found in the matrix!", number);
    }
    

}

int main(){

    int matrix[3][3] = {{15,21,24},{65,38,94},{73,68,82}};
    int searchedNumber ;
    printf("Enter a number to search : ");
    scanf("%d",&searchedNumber);

    search(matrix, searchedNumber);

    return 0;

}
