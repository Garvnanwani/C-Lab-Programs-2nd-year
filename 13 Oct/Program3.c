//  WAP to print the fibonnaci numbers till a number n

#include <stdio.h>
int main()
{
    int a = 1, n = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("1 1 ");
    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}
