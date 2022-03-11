#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double circleArea(double r)
{
    return M_PI * r * r;
}
int main()
{
    double r;
    scanf("%lf", &r);
    printf("The area of your circle is: %0.2lf", circleArea(r));
    return 0;
}
