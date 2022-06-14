#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char sentence[] = "This example is a sentence using punctuation marks and spaces parts. This sentence is written for testing.";
    const char brace[] =". ";                            //dot and space

    char *word = strtok(sentence, brace);

    while (word != NULL)
    {
        printf("%s\n",word);
        word = strtok(NULL, brace);
    }
    

    return 0;

}
