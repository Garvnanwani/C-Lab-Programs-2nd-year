// Write a 'C' program to swap the values of two variables by using call by reference

#include <stdio.h>

void swap(int *, int *);

int main()
{
    int x, y;

    printf("Enter x and y\n");
    scanf("%d%d", &x, &y);

    printf("x and y before swapping\nx = %d\ny = %d\n", x, y);

    swap(&x, &y);

    printf("x and y after swapping\nx = %d\ny = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}
