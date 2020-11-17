//  Pattern 3

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Input number of rows : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%c", (char)(j + 64));
        }

        printf("\n");
    }
}
