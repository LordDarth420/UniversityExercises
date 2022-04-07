#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[80], s2[80];
    int equal, length;
    scanf("%s\n%s", s1, s2);
    strcpy(s1, s2);
    printf("\n");
    printf("%s\n%s\n", s1, s2);
    strcat(s1, s2);
    printf("%s, %zu\n", s1, strlen(s1));
    equal = strcmp(s1, s2);
    if(equal == 0){printf("Strings are not equal.");}
    else{printf("Strings are equal.");}
}
