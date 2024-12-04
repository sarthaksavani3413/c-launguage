#include <stdio.h>

main()
{
    int row, column;

    printf("Enter the array's row & column size: ");
    scanf("%d", &row);

    column = row;

    int array[row][column];

    printf("Enter the array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int transpose[column][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    printf("\nThe transpose of the given matrix is:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}