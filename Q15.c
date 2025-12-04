#include <stdio.h>

int main() 
{
    char str[101];   
    int i, words = 0;
    int inWord = 0;  

    printf("Enter a line of text (up to 100 chars): ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
	{
            inWord = 0;
        } 
	else 
	{
            if (inWord == 0) 
	    {
                words++;     // new word starts
                inWord = 1;  // now inside a word
            }
        }
    }

    printf("Word count = %d\n", words);

    return 0;
}
