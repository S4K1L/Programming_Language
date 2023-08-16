#include <stdio.h>

void swapx(int* x, int* y)
{
	int t;

	t = *x;
	*x = *y;
	*y = t;

	printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}

int main()
{
	int a = 10, b = 20;

	swapx(&a, &b);

	printf("Inside the Caller:\na = %d b = %d\n", a, b);

	return 0;
}
