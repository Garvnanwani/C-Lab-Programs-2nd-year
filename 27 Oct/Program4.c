//  Write the function for Recursive Binary search.[Take input array in sorted order]

#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, start, mid - 1, x);

        return binarySearch(arr, mid + 1, end, x);
    }

    return -1;
}

int main(void)
{
    int n, x;
    printf("Enter the number of elements in the array : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search : \n");

    scanf("%d", &x);

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d", result);
    }
    return 0;
}
