#include <stdio.h>
main()
{
    int row, col;

    printf("enter array rows:-");
    scanf("%d", &row);

    printf("enter array colums:-");
    scanf("%d", &col);

    int a[row][col], r, c, rowsum = 0, colsum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter array elements [%d][%d]:-", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nenter row number:-");
    scanf("%d", &r);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == r)
            {
                printf("%d ", a[i][j]);
                rowsum += a[i][j];
            }
        }
    }

    printf("sum is rows:- %d\n\n", rowsum);

    printf("enter cols number:-");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == c)
            {
                printf("%d ", a[i][j]);
                colsum += a[i][j];
            }
        }
    }

    printf("sum is cols:- %d", colsum);
}