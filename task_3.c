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

int main(void)
{
        circle_t circle;
        float radius;
        printf("\nEnter radius: ");
        scanf("%f", &radius);

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