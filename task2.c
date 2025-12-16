#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI M_PI

static const double RADIUS = (2.0);

struct circle
{
        double circumference;
        double area;
        double radius;
};

typedef struct circle circle_t;

double circumference(double r)
{
        return 2 * PI * r;
}

double area(double r)
{
        return PI * pow(r, 2);
}

int main(void)
{
        circle_t circle;
        printf("\nEnter radius: ");

        circle.radius = RADIUS;
        circle.area = area(RADIUS);
        circle.circumference = circumference(RADIUS);

        printf("\nArea: ~ %g"
               "\nCircumference: ~ %g"
               "\nRadius: ~ %g\n",
               circle.area,
               circle.circumference,
               circle.radius);
        return 0;
}