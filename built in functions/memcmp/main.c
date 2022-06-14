#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};

    int result = memcmp(arr1, arr2, sizeof(int)*5);

    if (result == 0)
    {
        printf("They are equal");
    }else if (result < 0)
    {
        printf("arr1 is less than arr2");
    }else if (result > 0)
    {
        printf("arr1 is more than arr2");
    }
     
    return 0;

}
