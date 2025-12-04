#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int n, i;
    int *arr;
    float sum = 0.0, avg;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (i = 0; i < n; i++) 
    {
	printf("Enter integer %d: ", i+1);
        scanf("%d", arr + i);   
        sum += *(arr + i);      
    }

    avg = sum / n;

    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}
