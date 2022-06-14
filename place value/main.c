#include <stdio.h>

int main(){

    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    for( int i=1 ; i<=number ; i=i*10){
        int place = (number/i)%10;
        printf("%d place value %d\n",i,place);
    }

    return 0;
}
