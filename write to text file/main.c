#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "test.txt"
int main()
{
    FILE *fl;
    if ((fl = fopen(FILE_PATH, "w")) == NULL) // open to overwrite the file (deletes the contents of the file)
    { 
    printf("file could not be opened!\n");
    exit(1);
    }
    fputc('a', fl); // type a12 characters one by one
    fputc('1', fl);
    fputc('2', fl);

    fclose(fl); // close file

    if ((fl = fopen(FILE_PATH, "a")) == NULL) // open to attach file
    { 
        printf("file could not be opened!\n");
        exit(1);
    }
    long int indicator = ftell(fl); // read its byte number
    printf("%ld. character in index will be written\n", indicator);
    // fseek cannot be used in write mode. always writes at the end.
    fputs("line 1\n", fl); // write line by line
    fputs("...\n", fl);
    fprintf(fl, "%06d %.3f\n", 15, 1.3); // write in format
    fprintf(fl, "test\n");
    fclose(fl); // close file
    return 0;
}
