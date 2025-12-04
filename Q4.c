#include<stdio.h>

void swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int x, y;
	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);
	printf("Before swapping: x = %d, y = %d\n", x, y);

	swap(&x, &y);
	printf("After swapping: x = %d, y = %d\n", x, y);

	return 0;
}
