#include <stdio.h>

main()
{
    int row, column;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &column);

    int arrayA[row][column];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    int arrayB[row][column];

    printf("Enter array B's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }

    int arrayC[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
        }
    }

    printf("The resulting matrix after addition is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arrayC[i][j]);
        }
        printf("\n");
    }
}
