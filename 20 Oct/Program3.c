//  WAP to find the sum of elements of a 1-D array using pointers

#include <stdio.h>
int main()
{
    int array[100];
    int i, n, sum = 0, a;
    printf("value of a is %d", a);
    int *ptr;
    printf("\nEnter the number of elements of array: \n");
    scanf("%d", &n);
    printf("\nEnter array elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    ptr = array;

    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nThe sum is: %d\n", sum);
}
