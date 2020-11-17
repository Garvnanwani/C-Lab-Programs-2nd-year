//  Write a function in C to compare strings using pointer

#include <stdio.h>

void compare_string(char *, char *);

int main()
{
    char first[100], second[100], result;

    printf("Enter the first string\n");
    gets(first);

    printf("Enter the second string\n");
    gets(second);

    compare_string(first, second);
}

void compare_string(char *first, char *second)
{
    while (*first == *second)
    {
        if (*first == '\0' || *second == '\0')
            break;

        first++;
        second++;
    }
    if (*first == '\0' && *second == '\0')
    {
        printf("\nBoth the strings are equal.\n");
    }
    else
    {
        printf("\nBoth strings are not equal.\n");
    }
}
