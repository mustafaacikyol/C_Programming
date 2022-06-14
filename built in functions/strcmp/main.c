#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char text1[10] = "test";
    char text2[10] = "test"; 

    printf("text1 : %s\n", text1);
    printf("text2 : %s\n", text2);

    printf("text1 : %u\n", text1);
    printf("text2 : %u\n", text2);
    
    int result = strcmp(text1, text2);

    if (result == 0)
    {
        printf("text1 and text2 are equal\n");
    } else if (result < 0)
    {
        printf("alphabetically text1 < text2\n");
    } else
    {
        printf("alphabetically text1 > text2\n");
    }

    int result2 = strcmp("rubber", "ruler");

    if (result2 == 0)
    {
        printf("rubber and ruler are equal");
    } else if (result2 < 0)
    {
        printf("alphabetically rubber < ruler");
    } else
    {
        printf("alphabetically rubber > ruler");
    }
    
    
    return 0;

}
