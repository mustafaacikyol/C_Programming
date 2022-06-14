#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {

    char name[50];
    char surname[50];
    int student_number;
    int enroll_year;
    
};

int main(){

    struct Student list[100];

    strcpy(list[0].name, "John");
    strcpy(list[0].surname, "Space");
    list[0].student_number = 105;

    printf("Name : %s\n", list[0].name);
    printf("Surname : %s\n", list[0].surname);
    printf("Student Number : %d\n", list[0].student_number);

    return 0;

}
