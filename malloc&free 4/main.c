#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p_arr;
    p_arr = malloc(5 * sizeof(char));
    strcpy(p_arr, "test");
    printf("%s\n\n", p_arr);
    
    p_arr = realloc(p_arr, 100 * sizeof(char));
    strcat(p_arr, " 123456789123456789");
    printf("%s\n", p_arr);
    printf("size of string: %d\n", strlen(p_arr));
    printf("size of memory: 100\n\n");
    
    int number_of_characters = strlen(p_arr) + 1; // +1 terminating character
    p_arr = realloc(p_arr, number_of_characters * sizeof(char));
    printf("%s\n", p_arr);
    printf("size of string: %d\n", strlen(p_arr));
    printf("size of memory: %d\n", strlen(p_arr) + 1);
    
    free(p_arr);
    return 0;
}
