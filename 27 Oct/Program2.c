//  Write a function in ‘C’ to find GCD of two numbers using recursion

#include <stdio.h>

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int main()
{
    int a, b;
    printf("Enter the numbers : ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}
