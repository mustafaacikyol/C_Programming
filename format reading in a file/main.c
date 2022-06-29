#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "test.txt"

void read_line_by_line()
{
    FILE *fl;
    char buf[100];
    if ((fl = fopen(FILE_PATH, "r")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    int number_of_lines = 0;
    // line by line reading
    while (fgets(buf, 100, fl) != NULL)
    {
        number_of_lines++;
        printf("%d. line: %s", number_of_lines, buf);
    }
}

void read_formatted()
{
    FILE *fl;
    if ((fl = fopen(FILE_PATH, "r")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    char buf[100];
    fscanf(fl, "%99s", buf); // Read max 99 letter words
    printf("word read: %s\n", buf);
    fscanf(fl, "%99s", buf);
    printf("word read: %s\n", buf);
    fclose(fl);
}

int main()
{
    read_line_by_line();
    printf("\n----------------\n");
    read_formatted();
    
    return 0;
}
