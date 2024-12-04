#include <stdio.h>

main()
{
    int row, column;
    int sum = 0, count = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &column);

    int array[row][column];

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
            count++;
        }
    }

    printf("array sum %d\n", sum);

    printf("array average %.2f", (float)sum / (row * column));
}
