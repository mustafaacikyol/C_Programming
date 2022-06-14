#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int arr1[5] = {1,2,3,4,5};

    memset(arr1, 0, sizeof(int)*5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    

    return 0;

}
