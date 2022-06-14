#include <stdio.h>

int main(){

    char name[100];
    char surname[100];
    char first_letter;

    printf("Name : ");
    scanf("%99s", name);

    printf("Surname : ");
    scanf("%99s", surname);

    getchar();                          
    printf("First letter of name : ");
    scanf("%c", &first_letter);

    printf("Name : %s\n", name);
    printf("Surname : %s\n", surname);
    printf("First letter of name : %c\n", first_letter);

    return 0;

}
