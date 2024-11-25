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

    printf("\n The matrix element :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n diagonal elements: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}