#include<stdio.h>

void toCelsius(float f)
{
	float c = (((f -32)*5)/9);
 	printf("The temperature in Celsius is: %.2f\n", c);
}
int main()
{
	float f;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &f);
       	toCelsius(f);
return 0;
}
