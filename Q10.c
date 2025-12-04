#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Sum[3][3];
    int i, j;

    printf("Enter elements of first 3x3 matrix (A):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second 3x3 matrix (B):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nSum Matrix (A + B):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("%4d", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
