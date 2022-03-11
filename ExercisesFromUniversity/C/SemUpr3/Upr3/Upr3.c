#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main()
{
	int a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("%s", AreEqual(a, b, c));
	return 0;
}
const char* AreEqual(int a, int b, int c)
{
	if (a == b && a == c && b == c) { return "yes"; }
	else { return "no"; }
}