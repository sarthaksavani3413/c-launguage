#include <stdio.h>

main()
{
    int row, column;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &column);

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

    int Big = array[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] > Big)
            {
                Big = array[i][j];
            }
        }
    }

    printf("\nThe big element in the array is: %d\n", Big);

    return 0;
}
