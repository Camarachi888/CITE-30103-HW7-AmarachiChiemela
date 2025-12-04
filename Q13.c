#include <stdio.h>

int main() 
{
    char str[101]; 
    int vowels = 0, consonants = 0, digits = 0;
    int i;

    printf("Enter a line of text (up to 100 chars): ");
    fgets(str, sizeof(str), stdin);  

    
    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

  
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
        
	else if (ch >= '0' && ch <= '9') {
            digits++;
        }    
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
