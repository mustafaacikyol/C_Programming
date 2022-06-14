#include <stdio.h>

int number_of_characters(const char arr[]){

    int i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        //character count without action
    }

   return i;
}

int search_in_string(const char statement[], const char word[]){

    int i,j;
    for (i = 0; i < number_of_characters(statement) - number_of_characters(word); i++)
    {
        for (j = 0; j < number_of_characters(word); j++)
        {
            if (statement[i+j] != word[j])
            {
                break;
            }
            
        }
        
        if (number_of_characters(word) == j)
        {
            return 1;
        }
      
    }

    return 0;
    
}


int main(){

    char sentence[100];
    char searchedWord[20];
    printf("Please write a sentence : ");
    gets(sentence);
    printf("Please write a searched word : ");
    scanf("%20s", searchedWord);

    printf("Sentence length : %d\n", number_of_characters(sentence));
    printf("The length of the search word : %d\n", number_of_characters(searchedWord));
    
    int isThere = search_in_string(sentence, searchedWord);

    if (isThere == 0)
    {
        printf("The searched word is not in the sentence.");
    }else
    {
        printf("The searched word is in the sentence.");
    }
    
    
    return 0;

}
