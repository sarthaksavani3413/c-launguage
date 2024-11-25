#include <stdio.h>

main()
{
    int size = 5;
    int array[size][size];

    printf("Enter the array's elements:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int Sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                Sum += array[i][j];
            }
            else
            {
                printf("  ");
            }
        }
    }

    printf("\n Boundary elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("%d ", array[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n The sum of all boundary elements : %d\n", Sum);
}