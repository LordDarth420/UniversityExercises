#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 6, x, *p;
    p = &count;
    x = *p;
    printf("count = %d, x = %d", count, x);
    return 0;
}
