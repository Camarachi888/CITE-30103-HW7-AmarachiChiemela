#include <stdio.h>

int main() 
{
    int arr[5];
    int *p = arr; 
    int i;

    for (i = 0; i < 5; i++) 
    {
    	printf("Enter integer %d: ", i+1);
	scanf("%d", (p + i));   
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", *(p + i));   
    }
    printf("\n");

    return 0;
}
