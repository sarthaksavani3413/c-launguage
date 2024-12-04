#include <stdio.h>

main()
{
    int size;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter the array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int Sum = 0;

    for (int i = 0; i < size; i++)
    {
        Sum += array[i][i];
    }

    printf("Sum of the primary diagonal elements: %d\n", Sum);
}
