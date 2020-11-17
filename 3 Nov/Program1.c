//  Write a program to reverse each word of given text and remove all the extra spaces present in text

#include <stdio.h>

int main()
{
    int i, j;
    char str[50];

    printf("Enter the string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            j = i - 1;
            while (str[j] != ' ' && j >= 0)
            {
                printf("%c", str[j]);
                j--;
            }
            if (str[i + 1] != ' ')
                printf(" ");
        }
    }
    i--;

    while (str[i] != ' ' && i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");
}
