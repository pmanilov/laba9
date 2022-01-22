#include <stdio.h>
#include "laba9.h"

int main()
{
	int n,a,b,res;
	printf("Enter the number: ");
	if (scanf("%d", &n) != 1)
		return 1;
	printf("Enter the begining of the region: ");
	if (scanf("%d", &a) != 1)
		return 1;
	printf("Enter the ending of the region: ");
	if (scanf("%d", &b) != 1)
		return 1;
	res = InvReg(n, a, b);
	if (res == n)
		return printf("Invalid region!");
	printf("Result of inverting: ");
	printf("%d\n", res);
}