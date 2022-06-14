#include <stdio.h>
#include <stdlib.h>

int number_of_character(const char *sentence, int number){

    int i;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        
    }

    if (i<number)
    {
        return i-1;
    } else {
        return i;
    }
  
}

void string_concatenate(char *sentence_1, const char *sentence_2){

    int chrNumber_1 = number_of_character(sentence_1, 50);
    int chrNumber_2 = number_of_character(sentence_2, 50);

    sentence_1[chrNumber_1] = ' ';
    chrNumber_1++;
    
    for (int i = 0; i < chrNumber_1; i++)
    {
        sentence_1[i+chrNumber_1] = sentence_2[i];
    }

    sentence_1[chrNumber_1+chrNumber_2] = '\0';
    
}

int main(){

    char sentence_1[100];
    char sentence_2[50];
    printf("Write first sentence : ");
    fgets(sentence_1, 50 , stdin);
    printf("\nWrite a sentence to add first sentence : ");
    fgets(sentence_2, 50, stdin);

    string_concatenate(sentence_1,sentence_2);
    printf("Second sentence added to first sentence : ");
    puts(sentence_1);


    return 0;

}
