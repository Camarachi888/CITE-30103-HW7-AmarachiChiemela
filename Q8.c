#include <stdio.h>

int main() 
{
    int arr[10];
    int i, evenCount = 0, oddCount = 0;

    for (i = 0; i < 10; i++) 
    {
    	printf("Enter integer %d: ", i+1);
	scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        if (arr[i] % 2 == 0) 
	{
            evenCount++;
        } 
	else 
	{
            oddCount++;
        }
    }

    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);

    return 0;
}
