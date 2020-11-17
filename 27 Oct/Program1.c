// Write a function to find the Factorial of a number using recursion

#include <stdio.h>

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        return -1;
    }
    return x * factorial(x - 1);
}

int main()
{
    int x;
    printf("Enter the number : \n");
    scanf("%d", &x);
    int y = factorial(x);
    printf("The factorial of %d is %d", x, y);
    return 0;
}
