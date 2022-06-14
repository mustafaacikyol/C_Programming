#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point {

    int x;
    int y;
};

void assignment_value_to_point(struct point *a, int b, int c){

    (*a).x = b;
    a -> y = c;
}

int main(){

    struct point p1 = {2,5}; 
    assignment_value_to_point(&p1,15,25);

    printf("After assignment p1 : %d %d",p1.x, p1.y);

    return 0;

}
