#include "quadratic.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("ax^2 + bx + c = 0\n");
    printf("a = ?\n");
    scanf("%lf", &a);
    printf("b = ?\n");
    scanf("%lf", &b);
    printf("c = ?\n");
    scanf("%lf", &c);
    quadraticSolver(a, b, c);
    return 0;
}

void quadraticSolver(double a, double b, double c)
{

    double D = (b * b) - (4 * a * c);
    if(D < 0)
    {
        printf("Your equation doesn't have real solutions!");
    }
    else if(D == 0)
    {
        double result = -b/(2*a);
        if(result == round(result))
        {
            printf("The equation has only one solution and it is: %.0lf.", result);
        }
        else
        {
            printf("The equation has only one solution and it is: %0.5lf.", result);
        }
    }
    else
    {
        double x1, x2;
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        if(x1 == round(x1) && x2 == round(x2))
        {
            printf("The equation has two solutions and they are: %.0f and %.0lf.", x1, x2);
        }
        else if(x1 == round(x1))
        {
            printf("The equation has two solutions and they are: %.0f and %0.5lf.", x1, x2);
        }
        else if(x2 == round(x2))
        {
            printf("The equation has two solutions and they are: %0.6f and %.0lf.", x1, x2);
        }
        else
        {
            printf("The equation has two solutions and they are: %0.6lf and %0.5lf.", x1, x2);
        }
        /*this automatic rounding doesn't work well if you use double values as coefficients
         and if the solutions turn out to be whole numbers. needs fixing.*/
    }
    return;
}
