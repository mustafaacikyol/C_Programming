#include <stdio.h>
#include <stdlib.h>
#define FILE_PATH "test.txt"
int main()
{
    FILE *fl;
    if ((fl = fopen(FILE_PATH, "r")) == NULL)
    {
        printf("file could not be opened!\n");
        exit(1);
    }
    fseek(fl, 0, SEEK_END);                                         // skip to end of file
    long int len = ftell(fl);                                       // read the byte number the indicator is in
    printf("size of the file: %ld byte\n", len);
    fseek(fl, 0, SEEK_SET);                                         // skip to beginning of file
    long int indicator = ftell(fl);                                 // read its byte number
    printf("%ld. character in index will be read\n", indicator);
    char c = fgetc(fl);
    printf("read character: %c\n\n", c);
    indicator = ftell(fl);                                          // read its byte number
    printf("%ld. character in index will be read\n", indicator);
    c = fgetc(fl);
    printf("read character: %c\n\n", c);
    fseek(fl, len - 2, SEEK_SET);                                   // jump to the two previous character
    c = fgetc(fl);
    printf("two previous charactre from last: %c\n", c);
    fclose(fl);                                                     // close file
    return 0;
}
