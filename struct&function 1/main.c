#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{

    int x;
    int y;
};

double point_distance(struct point a1, struct point b1)
{

    return sqrt(pow(a1.x - b1.x, 2) + (pow(a1.y - b1.y, 2)));
};

int main()
{

    struct point p1 = {2, 4};
    struct point p2 = {1, 5};

    printf("Point1 x,y : %d %d\n", p1.x, p1.y);
    printf("Point2 x,y : %d %d\n", p2.x, p2.y);

    double distance = point_distance(p1, p2);

    printf("Distance between point1 and point2 : %lf\n", distance);

    return 0;
}
