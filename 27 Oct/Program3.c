//  Write a recursive function to implement Tower of Hanoi(TOH) problem in ‘C’

#include <stdio.h>

void towerOfHanoi(int n, char from, char to, char help)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, help, to);
    printf("\n Move disk %d from rod %c to rod %c", n, from, to);
    towerOfHanoi(n - 1, help, to, from);
}

int main()
{
    int n;
    printf("Enter the number of plates : \n");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
