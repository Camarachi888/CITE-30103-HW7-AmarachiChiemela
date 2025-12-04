#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if(n<2) 
	{
		return 0; 
	}
	for(int i=2; i<= sqrt(n); i++)
	{
		if(n%1 == 0 )
		{return 0;}
	}
return 1;
}

int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if(isPrime(n))
	{
		printf("Prime\n");
	}
	else
		printf("Not Prime\n");
return 0;
}
