#include <stdio.h>
#include <stdlib.h>

struct Time {

    int hour;
    int minute;
    int second;

};

int main(){

    struct Time t1 = {10,30,50};

    printf("Hour : %d\n", t1.hour);
    printf("Minute : %d\n", t1.minute);
    printf("Second : %d\n", t1.second);

    return 0;

}
