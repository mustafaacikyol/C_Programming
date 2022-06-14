#include <stdio.h>

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

int searching_character(const char *sentence, char chr){

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (chr == sentence[i])
        {
            return i;
        }
        
    }
    
    return -1;

}

int main(){

    char text[10];
    printf("Please write the sentence : ");
    fgets(text,10,stdin);


    printf("Number of Character : %d\n", number_of_character(text,9));

    int location = searching_character(text, 'a');

    if (location == -1)
    {
        printf("There isn't any a character in the string");
    } else
    {
        printf("a character is in the string and index number is : %d", location);
    }
    

    return 0;

}
