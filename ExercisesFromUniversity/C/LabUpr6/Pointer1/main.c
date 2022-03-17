#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double *p;
    p = &x;
    *p = 24.50;
    printf("%lf", *p);
    return 0;
}
