// WAP to print matrix of size mxn in Helical form
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the size of the matrix :\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    int i, j;
    printf("Enter the elements of the matrix : \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int col_end = c - 1;
    int row_start = 0;
    int row_end = r - 1;
    int col_start = 0;

    int col, row;

    while (row_start <= row_end && col_start <= col_end)
    {
        //for row_start;
        for (col = col_start; col <= col_end; col++)
            printf("%d ", a[row_start][col]);
        row_start++; //while loop increment;

        // for col_end;
        for (row = row_start; row <= row_end; row++)
            printf("%d ", a[row][col_end]);
        col_end--; //while loop de crement;

        //for row_end;
        for (col = col_end; col >= col_start; col--)
            printf("%d ", a[row_end][col]);
        row_end--; //while loop decrement;

        // for col_start;
        for (row = row_end; row >= row_start; row--)
            printf("%d ", a[row][col_start]);
        col_start++; //while loop increment;
    }
}
