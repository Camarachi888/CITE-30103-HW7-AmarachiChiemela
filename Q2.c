#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (b>a)
	max = b;
	if (c > b)
	max = c;
return max;
}
int main()
{
	int a, b, c;
	printf("Enter three integers: a, b, c ");
	scanf("%d %d %d", &a, &b, &c);
	int max = max3(a, b, c);
	printf("The largest of the integers is %d\n", max);
	return 0;
}
