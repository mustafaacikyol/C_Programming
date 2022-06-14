#include <stdio.h>
#include <stdlib.h>

struct date{

    int day;
    int month;
    int year;

};

struct student{

    char name[50];
    char surname[50];
    int studentNum;
    int enrollmentyear;
    struct date dateofBirth;
    struct date dateofEnrollment;

};

int main(){

    printf("%d\n", sizeof(struct date));
    printf("%d\n",sizeof(struct student));

    return 0;

}
