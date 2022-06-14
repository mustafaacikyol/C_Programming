#include <stdio.h>
#include <ctype.h>

int main(){

    char chrctr;
    printf("Enter a character : ");
    scanf("%c", &chrctr);

    if (ispunct(chrctr))
    {
        printf("%c is a punctuation.\n", chrctr);
    }else
    {
        printf("%c is not a punctuation.", chrctr);
    }
    
    return 0;
    
}
