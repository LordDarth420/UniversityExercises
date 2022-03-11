#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, r;
    int shape;
    scanf("%d", &shape);
    switch(shape)
    {
        case 1:
            printf("a = ?\n");
            scanf("%lf", &a);
            printf("Square, Area is: %0.2lf", squareArea(a));
            break;
        case 2:
            printf("a, b = ?\n");
            scanf("%lf\n%lf", &a, &b);
            printf("Rectangle, Area is: %0.2lf", rectangleArea(a, b));
            break;
        case 3:
            printf("a, b = ?\n");
            scanf("%lf\n%lf", &a, &b);
            printf("Right Triangle, Area is: %0.2lf", rightTriangleArea(a, b));
            break;
        case 4:
            printf("r = ?\n");
            scanf("%lf", &r);
            printf("Circle, Area is: %0.2lf", circleArea(r));
            break;
        default: ;
            printf("Wrong number!");
            break;
    }
}

double squareArea(double a)
{
    return a * a;
}
double rectangleArea(double a, double b)
{
    return a * b;
}
double rightTriangleArea(double a, double b)
{
    return (a * b) / 2;
}
double circleArea(double r)
{
    return M_PI * r * r;
}
