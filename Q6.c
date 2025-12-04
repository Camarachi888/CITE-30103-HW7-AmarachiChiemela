#include<stdio.h>
int main()
{
	int arr[100];
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		printf("Enter value %d of the array: ", i+1);
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	float avg = 0;
	for(int i=0; i<n; i++)
        {
                avg = (float)sum/n;
        }
	printf("The sum = %d.\nThe average = %.2f.\n", sum, avg);
	return 0;
}
