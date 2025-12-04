#include <stdio.h>

int square(int x) 
{
    return x * x;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result;

    int (*funcPtr)(int);

    funcPtr = square;

    result = funcPtr(num);

    printf("Number: %d\n", num);
    printf("Square: %d\n", result);

    return 0;
}
