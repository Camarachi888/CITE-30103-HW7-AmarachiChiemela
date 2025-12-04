#include <stdio.h>

int main() 
{
    int arr[5];
    int i, temp;


    for (i = 0; i < 5; i++) 
    {
	printf("Enter integer %d: ", i+1);	
    	scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5 / 2; i++) 
    {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
