#include <stdio.h>

int main() 
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a word (no spaces): ");
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) 
	{
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
