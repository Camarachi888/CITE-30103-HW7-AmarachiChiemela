#include<stdio.h>

float toCelsius(float f)
{
	float c = (((f -32)*5)/9);
 	return c;
}
int main()
{
	float f;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &f);
       	float c = toCelsius(f);
	printf("The temperature in Celsius is: %.2f\n", c);
return 0;
}
