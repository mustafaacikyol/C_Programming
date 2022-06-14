#include <stdio.h>

int main(){

    int line,column;
    printf("Enter number of lines:");
    scanf("%d",&line);
    printf("Enter number of columns:");
    scanf("%d",&column);

    for(int i=1 ; i<=line ; i++){
        for( int j=1; j<=column ; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}
