#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    for (int i = 0; i <= 32; i++)
    {
        char a = i;
        if (!isprint(a))
        {
            a = ' ';
        }

        char b=i+32;
        if (!isprint(a))
        {
            b = ' ';
        }

        char c=i+64;
        if (!isprint(a))
        {
            c = ' ';
        }

        char d=i+96;
        if (!isprint(a))
        {
            d = ' ';
        }

        printf("|%-2c - %-3d| |%-2c - %-3d| |%-2c - %-3d| |%-2c - %-3d|\n",a,i,b,i+32,c,i+64,d,i+96);
        
    }
    

    return 0;

}
