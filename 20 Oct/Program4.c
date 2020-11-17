//  Write a function to count the number of vowels, consonants, digits, white-space characters and “other” characters in a line of text

#include <stdio.h>
int main()
{
    char words[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;

    printf("Enter the text:\n");
    scanf("%[^\n]", words);

    for (i = 0; words[i] != '\0'; i++)
    {
        if ((words[i] >= 'a' && words[i] <= 'z') || (words[i] >= 'A' && words[i] <= 'Z'))
        {
            if (words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u' || words[i] == 'A' || words[i] == 'E' || words[i] == 'I' || words[i] == 'O' || words[i] == 'U')
                vowels++;
            else
                consonants++;
        }
        else if (words[i] == ' ' || words[i] == '\t' || words[i] == '\n')
        {
            spaces++;
        }
        else if (words[i] >= '0' && words[i] <= '9')
            digits++;
        else
            special++;
    }

    printf("\nNumber of Vowels:  %d\n", vowels);
    printf("Number of Consonants:  %d\n", consonants);
    printf("Number of Digits:  %d\n", digits);
    printf("Number of White spaces:  %d\n", spaces);
    printf("Number of Special Characters:  %d\n", special);

    return 0;
}
