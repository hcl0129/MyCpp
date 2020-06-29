#include <stdio.h>

int main()
{
	//int i = -1, &r = 0;
	int i = 3;
	int *const p2 = &i;
	//const int i = -1, &r = 0;
	const int *const p3 = &i;
	const int *p1 = &i;
	//const int &const r2;
	const int i2 = i, &r = i;
}
