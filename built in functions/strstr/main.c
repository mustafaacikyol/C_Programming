#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char sentence[100];
    char searched[20];

    printf("Enter a sentence : ");
    gets(sentence);
    printf("Enter a searched term : ");
    gets(searched);

    char *result = strstr(sentence, searched);
    int counter = 0;

    if (result == NULL)
    {
        printf("None");
    }else
    {
        printf("First appearance index : %d\n", result - sentence);
    }
    
     while (result != NULL)
    {
        counter++;
        result = strstr(result+1,searched);
    }

    printf("Occurs %d times in a sentence\n", counter);

    return 0;

}
