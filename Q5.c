#include<stdio.h>
long factorial(int n)
{
	long f = 1;
	if(n<0)
	{
		printf("Error! Enter a number greater than 0");
		return -1;
	}
	for(int i=1; i<=n; i++)
		f = i*f;
	return f;
}	

int main()
{
	int n;
	printf("Enter a number ");
	scanf("%d", &n);
	long fac = factorial(n);
	if(fac != -1)
	printf("The factorial of %d is %ld\n: ", n, fac);
	       return 0;
}	
