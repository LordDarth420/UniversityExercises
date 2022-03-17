#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, x;
    double *b, y;
    char *c, z;

    a = &x;
    b = &y;
    c = &z;

    *a = 5;
    *b = 5.43;
    *c = 'a';

    printf("%d, %0.2lf, %c\n", a, b, c);
    printf("%d, %0.2lf, %c\n", *a, *b, *c);

    (*a)++;
    (*b)++;
    (*c)++;
    printf("%d, %0.2lf, %c\n", *a, *b, *c);

    a++;
    b++;
    c++;
    printf("%d, %0.2lf, %c", a, b, c);
    return 0;
}
