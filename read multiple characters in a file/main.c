#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "test.txt"

int main()
{
    
    FILE *fl;
    char c;
    // open file
    if ((fl = fopen(FILE_PATH, "r")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    // let the loop run until it reaches the end of the file
    while ((c = fgetc(fl)) != EOF)
    {
        printf("character: %c (%d)\n", c, c);
    }
    // close file

    fclose(fl);
    return 0;

}
