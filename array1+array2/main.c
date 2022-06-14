#include<stdio.h>

int main(){

    int array1[] = {5,8,3,4,6};
    int array2[] = {7,9,5,6,4};
    int sum[6];
    int in_hand = 0;

    for( int i=4 ; i>-1 ; i-- ){

        int total = array1[i] + array2[i] + in_hand;
        
        in_hand = total/10;
        sum[i + 1] = total % 10;
        
        if( i==0 ){
            
            sum[i] = in_hand;

        }

    }

    printf("Sum : ");

    for( int i=0 ; i<6 ; i++ ){
        printf("%d ",sum[i]);
    }

    return 0;
}
