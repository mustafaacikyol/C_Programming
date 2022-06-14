#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{

    int day;
    int month;
    int year;
};

struct student
{

    char name[50];
    char surname[50];
    int number;
    char department[50];
    struct date dateofEnrollment;
};

struct date produce_date(int d, int m, int y){

    struct date t;
    if ( d>31 || m>12 )
    {
        t.day = 0;
        t.month = 0;
        t.year = 0;

    }else
    {
        t.day = d;
        t.month = m;
        t.year = y;

    }
    
    return t;

}

void assignmentToStudent(struct student *a, char name1[], char surname1[], int number1, char department1[], struct date dateofEnrollment1)
{
    strcpy(a -> name , name1);
    strcpy(a -> surname, surname1);
    a -> number = number1;
    strcpy(a -> department , department1);
    a -> dateofEnrollment = dateofEnrollment1;

}

int main()
{

    struct student list[50];
    
    assignmentToStudent(&list[0], "Mustafa", "Acikyol", 1717, "Computer Engineer", produce_date(7,10,2022));
    assignmentToStudent(&list[1], "Ahmet", "Acikyol", 1515, "Electronics Engineer", produce_date(3, 9, 2022));
    assignmentToStudent(&list[2], "Berkan", "Acikyol", 1212, "Mechanical Engineer", produce_date(11, 12, 2022));

    int numberOfStudents = 3;

    for (int i = 0; i < numberOfStudents; i++)
    {

        printf("list[%d] name : %s\n",i, list[i].name);
        printf("list[%d] surnmae : %s\n",i, list[i].surname);
        printf("list[%d] number : %d\n",i, list[i].number);
        printf("list[%d] department : %s\n",i, list[i].department);
        printf("list[%d] date of enrollment : %02d / %02d / %d\n",i, list[i].dateofEnrollment.day, list[i].dateofEnrollment.month, list[i].dateofEnrollment.year);
    }

    return 0;
}
