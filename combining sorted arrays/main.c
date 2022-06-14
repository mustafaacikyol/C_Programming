#include<stdio.h>

int main(){
    int array1[] = {1,3,5,8,9,10};
    int array2[] = {2,6,7,12};
    int array3[10];
    int j = 0;
    int k = 0;

    for( int i=0 ; i<10 ; i++ ){

        if( k>=4 ){
            array3[i] = array1[j];
            j++;
        }else if( j>=6 ){
            array3[i] = array2[k];
            k++;
        }
        else if( array1[j]<array2[k] ){
            array3[i] = array1[j];
            j++;
        } else {
            array3[i] = array2[k];
            k++;
        }
    }
    

    for( int i=0 ; i<10 ; i++ ){

        printf("%d ",array3[i]);
    }
    
    return 0;
}
