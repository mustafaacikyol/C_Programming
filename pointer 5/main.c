#include <stdio.h>

void convert_number(int number, int *hour, int *minute, int *second){

    /*

    *hour = number/3600;
    *minute = (number%3600)/60;
    *second = number - (*minute * 60) - (*hour * 3600); 

    */

    //better way is below

    *second = number%60;
    *minute = (number/60)%60;
    *hour = number/3600;

}

int main(){

    while ("true")
    {
        int number, hour, minute, second;
        printf("Enter a number please : ");
        scanf("%d",&number);

        convert_number(number, &hour, &minute, &second);

        printf("%d hour %d minute %d second \n\n", hour, minute, second);
    }
    
    return 0;

}
