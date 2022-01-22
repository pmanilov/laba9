#include "laba9.h"

int Inv(int a)
{
	int k = 3;
	while (k < 32) {
		a = a ^ 1 << k;
		k += 4;
	}
	return a;
}

int InvReg(int n, int a, int b)
{
	if (a < 0 || a > 31)
		return n;
	if (b < 0 || b > 31)
		return n;
	if (a <= b)
		for (a; a <= b; a++)
			n = n ^ 1 << a;
	else
		for (b; b <= a; b++)
			n = n ^ 1 << b;
	return n;
}