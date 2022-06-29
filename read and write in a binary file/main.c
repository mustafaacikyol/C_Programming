#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "registration.bin"

struct Student
{
    char no[10];
    char name[20];
    char surname[20];
    int point ;
};

void list()
{
    FILE *fl;
    // open file in read mode
    if ((fl = fopen(FILE_PATH, "r")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    printf("\nlist:\n");
    while (1)
    {
        struct Student stdnt;
        size_t sayi = fread(&stdnt, sizeof(struct Student), 1, fl);
        if (sayi < 1)
            break; // stop loop if not read (file finished etc.)
        printf("%s %s %s %d\n", stdnt.no, stdnt.name, stdnt.surname, stdnt.point );
    }
    fclose(fl);
}

void add_record(struct Student stdnt)
{

    FILE *fl;

    if ((fl = fopen(FILE_PATH, "a")) == NULL)
    {
        printf("file could not be opened\n");
        exit(1);
    }

    fwrite(&stdnt, sizeof(struct Student), 1, fl);

    fclose(fl);
}

void delete_records()
{
    FILE *fl;
    // open file in write mode
    if ((fl = fopen(FILE_PATH, "w")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    
    fclose(fl);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1: list\n");
        printf("2: add record\n");
        printf("3: delete records\n");
        printf("0: exit\n");
        printf("choice?: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            list();
            break;
        case 2:
        {
            struct Student stdnt;
            printf("no name surname point?:");
            scanf("%s %s %s %d", stdnt.no, stdnt.name, stdnt.surname, &stdnt.point );
            add_record(stdnt);
            break;
        }
        case 3:
        {
            delete_records();
            break;
        }
        default:
            printf("wrong choice\n");
        };
    }
    return 0;
}
