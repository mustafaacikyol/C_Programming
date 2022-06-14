#include <stdio.h>
#include <ctype.h>

int main(){

    char chrctr;
    printf("Enter a character : ");
    scanf("%c", &chrctr);

    if (isdigit(chrctr))
    {
        printf("%c is a digit.\n", chrctr);
    }else
    {
        printf("%c is not a digit.", chrctr);
    }
    
    return 0;
    
}
