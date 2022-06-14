#include <stdio.h>

int main(){

    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("|%-2c - %-3d| |%-2c - %-3d|\n", i,i, i+32,i+32);
    }
    
    return 0;

}
