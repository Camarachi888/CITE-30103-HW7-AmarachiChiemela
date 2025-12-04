#include <stdio.h>

int main() {
    int arr[10];
    int i, largest, smallest;

    for (i = 0; i < 10; i++) 
    {
        printf("Enter integer %d: ", i+1);
	scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] > largest) 
	{
            largest = arr[i];
        }
        if (arr[i] < smallest) 
	{
            smallest = arr[i];
        }
    }

    printf("Largest value = %d\n", largest);
    printf("Smallest value = %d\n", smallest);

    return 0;
}
