#include <stdio.h>

main()
{
    int size;

    printf("enter element : ");
    scanf("%d", &size);

    int a[size][size];

    printf("the matrix is : \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n The given matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n anti diagonal elements: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j == size - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}