#include <stdio.h>
#include <ctype.h>

int main(){

    char chrctr;
    printf("Enter a character : ");
    scanf("%c", &chrctr);

    if (isalpha(chrctr))
    {
        if (isupper(chrctr))
        {
            printf("Lowercase letter of %c : %c\n", chrctr, tolower(chrctr));
        }else if (islower(chrctr))
        {
            printf("Uppercase letter of %c : %c\n", chrctr, toupper(chrctr));
        }
        
    }
    
  return 0;

}
