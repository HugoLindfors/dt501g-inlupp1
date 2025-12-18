#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846264338327950288

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

int main(int argc, char *argv[])
{
        double radius = strtod(argv[1], NULL);

        circle_t circle;
        printf("\nEnter radius: ");

        circle.radius = radius;
        circle.area = area(radius);
        circle.circumference = circumference(radius);

        printf("\nArea: ~ %g"
               "\nCircumference: ~ %g"
               "\nRadius: ~ %g\n",
               circle.area,
               circle.circumference,
               circle.radius);
        return 0;
}