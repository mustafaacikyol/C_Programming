#include <stdio.h>

int main(){
    int line, column,i,j;
    printf("Enter number of lines:");
    scanf("%d",&line);
    printf("Enter number of columns:");
    scanf("%d",&column);

    for( i=0; i<line ; i++ ){
        for( j=0 ; j<column ;j++ ){
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
