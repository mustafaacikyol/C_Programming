#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[9] = {0};

    memcpy(arr2,arr1,sizeof(int)*5);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr2[i]);
    }
    

    return 0;

}
