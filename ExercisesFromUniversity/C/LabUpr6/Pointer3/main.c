#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *pv;
    int i = 10;
    double d = 2.34;
    pv = &i;
    printf("%d\n", *((int *)pv));
    pv = &d;
    printf("%lf", *((double *)pv));
    return 0;
}
