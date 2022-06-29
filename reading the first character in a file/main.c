#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE *fl = fopen("test.txt", "w");          // open file
    if (fl == NULL)                             // NULL if file is not accessible
    { 
        printf("file could not be opened\n");
        exit(1);
    }
    char c = fgetc(fl);
    if (c == EOF)                               // file end check
    {
        printf("end of file, no characters\n"); // If the end of the file is reached, the EOF (-1) value is read.
    }
    else
    {
        printf("read character: %c\n", c);      // first character read in file.
    }
    
    fclose(fl);                                 // close file
    return 0;

}
