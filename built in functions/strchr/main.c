#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char sentence[100];
    char character;

    printf("Enter a sentence : ");
    fgets(sentence,100,stdin);
    printf("Enter the searched character : ");
    scanf("%c",&character);

    char *first_pass_pointer = strchr(sentence, character);

    if (first_pass_pointer == NULL)
    {
        printf("None");
    }else
    {
        printf("First pass index : %d\n", first_pass_pointer - sentence);
        printf("Sentence after %c -> %s\n", character, first_pass_pointer+1);
    }

    return 0;

}
