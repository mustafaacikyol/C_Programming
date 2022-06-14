#include <stdio.h>
#include <stdlib.h>

struct Time {

    int hour;
    int minute;
    int second;

};

int main(){

    struct Time t1;

    t1.hour = 10;
    t1.minute = 30;
    t1.second = 50;

    printf("Time : %d:%d:%d", t1.hour, t1.minute, t1.second);

    return 0;

}
